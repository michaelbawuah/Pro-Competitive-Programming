#!/usr/bin/env python3
"""Small, dependency-free C++ practice and local verification tool."""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import shlex
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from checkers import CHECKERS

ROOT = Path(__file__).resolve().parents[1]


def problems():
    return json.loads((ROOT / 'data/problems.json').read_text())


def find_problem(key):
    for problem in problems():
        if problem['id'] == key:
            return problem
    raise ValueError(f'Unknown problem: {key}. Run: python3 tools/cp.py list')


def compile_source(source, sanitize=False):
    source = Path(source).resolve()
    flags = ['-std=c++17', '-Wall', '-Wextra', '-Wshadow', '-Wpedantic', '-Werror']
    flags += ['-O1', '-g', '-fsanitize=undefined', '-fno-sanitize-recover=all',
              '-D_GLIBCXX_ASSERTIONS'] if sanitize else ['-O2']
    compiler = shlex.split(os.environ.get('CXX', 'c++'))
    build = ROOT / '.build'
    build.mkdir(exist_ok=True)
    key = hashlib.sha256((str(source) + repr(flags) + repr(compiler)).encode()).hexdigest()[:16]
    output = build / f'{source.stem}-{key}'
    subprocess.run([*compiler, *flags, str(source), '-o', str(output)],
                   check=True, timeout=60)
    return output


def run_binary(binary, input_text, timeout=3.0):
    result = subprocess.run([str(binary)], input=input_text, text=True,
                            capture_output=True, timeout=timeout)
    if result.returncode:
        raise ValueError(f'Program exited {result.returncode}: {result.stderr[:2000]}')
    return result.stdout


def validate(problem, case, actual):
    """Token checks for unique answers; structural checks for non-unique answers."""
    expected = case['output'].split()
    tokens = actual.split()
    checker = problem.get('checker', 'tokens')
    if checker in CHECKERS:
        try:
            return CHECKERS[checker](case, actual)
        except (ValueError, IndexError, KeyError):
            return False
    if checker == 'tokens' or expected == ['IMPOSSIBLE']:
        return tokens == expected
    if tokens == ['IMPOSSIBLE']:
        return False
    try:
        values = list(map(int, tokens))
        raw = list(map(int, case['input'].split()))
        n, m = raw[:2]
        edges = list(zip(raw[2::2], raw[3::2]))
        if len(values) != n or len(edges) != m:
            return False
        if checker == 'bipartite':
            return all(x in (1, 2) for x in values) and all(
                values[a - 1] != values[b - 1] for a, b in edges)
        if checker == 'topological':
            if sorted(values) != list(range(1, n + 1)):
                return False
            position = {node: i for i, node in enumerate(values)}
            return all(position[a] < position[b] for a, b in edges)
    except ValueError:
        return False
    raise ValueError(f'Unknown checker: {checker}')


def test_problem(problem, source=None, sanitize=False):
    cases = json.loads((ROOT / problem['tests']).read_text())
    binary = compile_source(source or ROOT / problem['solution'], sanitize)
    for case in cases:
        actual = run_binary(binary, case['input'])
        if not validate(problem, case, actual):
            raise ValueError(f"{problem['id']} / {case['name']} failed\n"
                             f"Input:\n{case['input']}Expected:\n{case['output']}Got:\n{actual[:2000]}")
    print(f"PASS {problem['id']}: {len(cases)} cases")
    return len(cases)


def generated_docs():
    entries = problems()
    lines = ['# Problem index', '',
             'Reference implementations are locally tested; official acceptances are tracked separately.', '',
             '| ID | Problem | Technique | Time / extra space | Code / notes |',
             '| --- | --- | --- | --- | --- |']
    for p in entries:
        lines.append(f"| `{p['id']}` | [{p['title']}]({p['url']}) | {', '.join(p['tags'])} | "
                     f"{p['time']} / {p['space']} | [C++](../{p['solution']}) · [Notes](../{p['notes']}) |")
    progress = ['# Progress', '', f'- Reference implementations: **{len(entries)}**.',
                '- Official acceptances: see the evidence ledger in `data/acceptances.json`.',
                '- Contest results: see `contests/`; no results are implied by this archive.', '',
                'The starter set was built with AI assistance. A reference file is not a record of a personal solve.',
                'Track your own attempt, explanation, and judge submission as you work through the practice route.', '',
                '## Record an acceptance', '',
                'Add an entry to `data/acceptances.json`, using your real handle and submission URL:', '',
                '```json', '{', '  "problem_id": "cses-1083",', '  "handle": "your-handle",',
                '  "submission_url": "https://cses.fi/problemset/result/YOUR_RESULT_ID/",',
                '  "date": "YYYY-MM-DD",', '  "verdict": "AC",',
                '  "mode": "independent | after-hint | reference-assisted"', '}', '```', '',
                'Replace every placeholder. `cp.py check` checks ledger structure, not the remote verdict.',
                'Only record AC after the judge actually reports it. Include a short note about what you learned.', '']
    return {'docs/problems.md': '\n'.join(lines) + '\n', 'docs/progress.md': '\n'.join(progress)}


def check_metadata():
    entries = problems()
    ids = set()
    solutions = set()
    for p in entries:
        if p['id'] in ids:
            raise ValueError(f"Duplicate ID: {p['id']}")
        ids.add(p['id'])
        solutions.add(p['solution'])
        for field in ('solution', 'notes', 'tests'):
            path = (ROOT / p[field]).resolve()
            if not path.is_relative_to(ROOT) or not path.is_file():
                raise ValueError(f"Missing or invalid {field}: {p['id']}")
        if not p['url'].startswith('https://'):
            raise ValueError(f"Invalid problem URL: {p['id']}")
        cases = json.loads((ROOT / p['tests']).read_text())
        if not cases or len({c['name'] for c in cases}) != len(cases):
            raise ValueError(f"Missing tests or duplicate test names: {p['id']}")
        for case in cases:
            if not validate(p, case, case['output']):
                raise ValueError(f"Invalid fixture answer: {p['id']}/{case['name']}")
    actual = {str(p.relative_to(ROOT)) for p in (ROOT / 'solutions').rglob('*.cpp')}
    if actual != solutions:
        raise ValueError(f'Unindexed solutions or duplicate paths: {actual ^ solutions}')
    if len(solutions) != len(entries):
        raise ValueError('Multiple problems use the same solution path')
    for entry in json.loads((ROOT / 'data/acceptances.json').read_text()):
        if entry['problem_id'] not in ids or entry['verdict'] != 'AC':
            raise ValueError('Invalid acceptance entry')
        if not entry['submission_url'].startswith('https://') or not entry['handle']:
            raise ValueError('An acceptance needs a handle and a submission URL')
    for path, expected in generated_docs().items():
        if not (ROOT / path).is_file() or (ROOT / path).read_text() != expected:
            raise ValueError('Stale generated index. Run: python3 tools/cp.py index')
    print(f'PASS metadata: {len(entries)} problems; all sources, notes, and fixtures indexed')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest='command', required=True)
    listing = commands.add_parser('list', help='Browse problems without revealing solutions')
    listing.add_argument('--tag', default='')
    for name in ('info', 'hint', 'practice'):
        commands.add_parser(name).add_argument('id')
    test = commands.add_parser('test', help='Compile and test one solution, all, or the library')
    test.add_argument('id')
    test.add_argument('--source', type=Path, help='Test your own attempt instead of the reference')
    test.add_argument('--sanitize', action='store_true', help='Enable undefined-behavior sanitizer')
    test.add_argument('--jobs', type=int, default=1, help='Concurrent independent builds')
    test.add_argument('--shard-index', type=int, default=0, help='Zero-based CI shard')
    test.add_argument('--shard-count', type=int, default=1, help='Number of disjoint CI shards')
    commands.add_parser('check', help='Check catalogue and acceptance ledger structure')
    commands.add_parser('index', help='Regenerate the problem index and progress document')
    stress = commands.add_parser('stress', help='Compare with independent small-input oracles')
    stress.add_argument('--cases', type=int, default=100)
    stress.add_argument('--seed', type=int, default=2110)
    args = parser.parse_args()
    if args.command == 'list':
        for p in problems():
            if args.tag.lower() in ','.join(p['tags']).lower():
                print(f"{p['id']:14} {p['title']:30} {', '.join(p['tags'])}")
    elif args.command in ('info', 'hint', 'practice'):
        p = find_problem(args.id)
        if args.command == 'info':
            print(f"{p['title']}\n{p['url']}\nReference: {p['solution']}\nNotes: {p['notes']}")
        elif args.command == 'hint':
            print(p['hint'])
        else:
            path = ROOT / 'practice' / f"{p['id']}.cpp"
            path.parent.mkdir(exist_ok=True)
            with path.open('x') as handle:
                handle.write(f"// {p['title']}\n// {p['url']}\n" + (ROOT / 'templates/main.cpp').read_text())
            print(f"Created {path.relative_to(ROOT)}\nProblem: {p['url']}\n"
                  f"Test: python3 tools/cp.py test {p['id']} --source {path.relative_to(ROOT)}")
    elif args.command == 'test':
        if args.jobs < 1 or args.shard_count < 1 or not 0 <= args.shard_index < args.shard_count:
            parser.error('jobs and shard count must be positive; shard index must be in range')
        if args.id != 'all' and (args.shard_count != 1 or args.shard_index != 0):
            parser.error('sharding requires test all')
        if args.source and args.id in ('all', 'library'):
            parser.error('--source requires one problem ID')
        count = 0
        if args.id != 'library':
            selected = problems() if args.id == 'all' else [find_problem(args.id)]
            selected = selected[args.shard_index::args.shard_count]
            with ThreadPoolExecutor(max_workers=args.jobs) as pool:
                count = sum(pool.map(lambda p: test_problem(p, args.source, args.sanitize), selected))
        if args.id in ('all', 'library') and args.shard_index == 0:
            binary = compile_source(ROOT / 'tests/library_test.cpp', args.sanitize)
            print(run_binary(binary, '', timeout=20).strip())
        print(f'All requested checks passed ({count} problem cases).')
    elif args.command == 'index':
        for path, content in generated_docs().items():
            (ROOT / path).parent.mkdir(parents=True, exist_ok=True)
            (ROOT / path).write_text(content)
        print('Updated problem index and progress document.')
    elif args.command == 'check':
        check_metadata()
    elif args.command == 'stress':
        if args.cases < 1:
            parser.error('--cases must be positive')
        import stress
        stress.run(args.cases, args.seed)


if __name__ == '__main__':
    try:
        main()
    except (ValueError, OSError, subprocess.SubprocessError, KeyError) as error:
        print(f'ERROR: {error}', file=sys.stderr)
        sys.exit(1)
