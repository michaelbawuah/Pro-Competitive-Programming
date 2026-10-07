"""Seeded small-input differential tests; oracles prioritize simplicity over speed."""
from functools import lru_cache
from itertools import combinations, permutations, product
import json
import random

import cp
from stress_extended import GENERATORS as EXTENDED_GENERATORS


def array_case(rng, kind):
    a = [rng.randint(-5, 6) for _ in range(rng.randint(1, 10))]
    n = len(a)
    prefix = str(n)
    if kind == 'maximum':
        expected = max(sum(a[i:j]) for i in range(n) for j in range(i + 1, n + 1))
    elif kind == 'playlist':
        expected = max(j - i for i in range(n) for j in range(i + 1, n + 1)
                       if len(set(a[i:j])) == j - i)
    elif kind == 'subarray':
        target = rng.randint(-8, 8)
        prefix += f' {target}'
        expected = sum(sum(a[i:j]) == target for i in range(n) for j in range(i + 1, n + 1))
    else:
        # Enumerate subsequences, instead of the optimized tails recurrence.
        a = [x + 6 for x in a]
        expected = 0
        for mask in range(1 << n):
            selected = [a[i] for i in range(n) if mask >> i & 1]
            if all(x < y for x, y in zip(selected, selected[1:])):
                expected = max(expected, len(selected))
    return f'{prefix}\n' + ' '.join(map(str, a)) + '\n', str(expected)


def factory(rng):
    machines = [rng.randint(1, 10) for _ in range(rng.randint(1, 6))]
    target = rng.randint(1, 30)
    answer = next(t for t in range(min(machines) * target + 1)
                  if sum(t // k for k in machines) >= target)
    return f'{len(machines)} {target}\n' + ' '.join(map(str, machines)) + '\n', str(answer)


def apartments(rng):
    wants = [rng.randint(1, 15) for _ in range(rng.randint(1, 6))]
    sizes = [rng.randint(1, 15) for _ in range(rng.randint(1, 6))]
    k = rng.randint(0, 4)
    @lru_cache(None)
    def search(i, used):
        if i == len(wants):
            return 0
        options = [search(i + 1, used)]
        for j, size in enumerate(sizes):
            if not (used >> j & 1) and abs(wants[i] - size) <= k:
                options.append(1 + search(i + 1, used | (1 << j)))
        return max(options)
    text = f'{len(wants)} {len(sizes)} {k}\n' + ' '.join(map(str, wants)) + '\n' + ' '.join(map(str, sizes)) + '\n'
    return text, str(search(0, 0))


def ferris(rng):
    limit = rng.randint(2, 20)
    weights = [rng.randint(1, limit) for _ in range(rng.randint(1, 9))]
    @lru_cache(None)
    def search(mask):
        if not mask:
            return 0
        first = next(i for i in range(len(weights)) if mask >> i & 1)
        rest = mask ^ (1 << first)
        choices = [1 + search(rest)]
        for j in range(first + 1, len(weights)):
            if rest >> j & 1 and weights[first] + weights[j] <= limit:
                choices.append(1 + search(rest ^ (1 << j)))
        return min(choices)
    return f'{len(weights)} {limit}\n' + ' '.join(map(str, weights)) + '\n', str(search((1 << len(weights)) - 1))


def movies(rng):
    intervals = [(s, s + rng.randint(1, 7)) for s in (rng.randint(1, 15) for _ in range(rng.randint(1, 9)))]
    best = 0
    for mask in range(1 << len(intervals)):
        selected = sorted(intervals[i] for i in range(len(intervals)) if mask >> i & 1)
        if all(a[1] <= b[0] for a, b in zip(selected, selected[1:])):
            best = max(best, len(selected))
    return str(len(intervals)) + '\n' + ''.join(f'{s} {e}\n' for s, e in intervals), str(best)


def coins(rng, count):
    values = rng.sample(range(1, 9), rng.randint(1, 4))
    target = rng.randint(1, 24)
    if count:
        def enumerate_counts(i, remaining):
            if i == len(values):
                return int(remaining == 0)
            return sum(enumerate_counts(i + 1, remaining - used * values[i])
                       for used in range(remaining // values[i] + 1))
        answer = enumerate_counts(0, target)
    else:
        frontier, seen, answer = {0}, {0}, -1
        for depth in range(1, target + 1):
            frontier = {s + coin for s in frontier for coin in values if s + coin <= target} - seen
            if target in frontier:
                answer = depth
                break
            seen |= frontier
    return f'{len(values)} {target}\n' + ' '.join(map(str, values)) + '\n', str(answer)


def books(rng):
    n, budget = rng.randint(1, 9), rng.randint(1, 25)
    costs = [rng.randint(1, 12) for _ in range(n)]
    pages = [rng.randint(1, 20) for _ in range(n)]
    best = max(sum(pages[i] for i in range(n) if mask >> i & 1)
               for mask in range(1 << n)
               if sum(costs[i] for i in range(n) if mask >> i & 1) <= budget)
    return f'{n} {budget}\n' + ' '.join(map(str, costs)) + '\n' + ' '.join(map(str, pages)) + '\n', str(best)


def graph_case(rng, mode):
    n = rng.randint(2, 6)
    edges = []
    if mode == 'shortest':
        edges = [(i, i + 1, rng.randint(1, 20)) for i in range(n - 1)]
        edges += [(rng.randrange(n), rng.randrange(n), rng.randint(1, 20)) for _ in range(rng.randint(1, 9))]
        # Bellman-Ford is independent of heap ordering and lazy deletion.
        distance = [10**9] * n
        distance[0] = 0
        for _ in range(n - 1):
            old = distance[:]
            for a, b, cost in edges:
                distance[b] = min(distance[b], old[a] + cost)
        answer = ' '.join(map(str, distance))
    elif mode == 'mst':
        pairs = list(combinations(range(n), 2))
        rng.shuffle(pairs)
        edges = [(a, b, rng.randint(1, 20)) for a, b in pairs[:rng.randint(1, min(9, len(pairs)))]]
        best = None
        for selected in combinations(edges, n - 1):
            reached = {0}
            for _ in range(n):
                for a, b, _cost in selected:
                    if a in reached or b in reached:
                        reached.update((a, b))
            if len(reached) == n:
                cost = sum(e[2] for e in selected)
                best = cost if best is None else min(best, cost)
        answer = 'IMPOSSIBLE' if best is None else str(best)
    else:
        pairs = [(a, b) for a in range(n) for b in range(n) if a != b]
        rng.shuffle(pairs)
        edges = pairs[:rng.randint(1, min(10, len(pairs)))]
        answer = 'IMPOSSIBLE'
        if mode == 'teams':
            for coloring in product((1, 2), repeat=n):
                if all(coloring[a] != coloring[b] for a, b in edges):
                    answer = ' '.join(map(str, coloring))
                    break
        else:
            for order in permutations(range(n)):
                positions = {v: i for i, v in enumerate(order)}
                if all(positions[a] < positions[b] for a, b in edges):
                    answer = ' '.join(str(v + 1) for v in order)
                    break
    text = f'{n} {len(edges)}\n'
    for edge in edges:
        text += f'{edge[0] + 1} {edge[1] + 1}' + (f' {edge[2]}' if len(edge) == 3 else '') + '\n'
    return text, answer


def ranges(rng, minimum):
    n = rng.randint(1, 15)
    values = [rng.randint(1, 10**9) for _ in range(n)]
    lines = [f'{n} 30', ' '.join(map(str, values))]
    answers = []
    for query in range(30):
        if query != 29 and rng.randrange(2):
            index, value = rng.randrange(n), rng.randint(1, 10**9)
            values[index] = value
            lines.append(f'1 {index + 1} {value}')
        else:
            left = rng.randrange(n)
            right = rng.randint(left + 1, n)
            lines.append(f'2 {left + 1} {right}')
            answers.append(str(min(values[left:right]) if minimum else sum(values[left:right])))
    return '\n'.join(lines) + '\n', '\n'.join(answers)


def matching(rng):
    text = ''.join(rng.choices('abc', k=rng.randint(1, 40)))
    pattern = ''.join(rng.choices('abc', k=rng.randint(1, 12)))
    answer = sum(text.startswith(pattern, i) for i in range(len(text)))
    return f'{text}\n{pattern}\n', str(answer)


def frog(rng):
    n = rng.randint(2, 9)
    k = rng.randint(1, n + 3)
    heights = [rng.randint(1, 30) for _ in range(n)]
    def enumerate_paths(i):
        if i == n - 1:
            return 0
        return min(abs(heights[i] - heights[j]) + enumerate_paths(j)
                   for j in range(i + 1, min(n, i + k + 1)))
    return f'{n} {k}\n' + ' '.join(map(str, heights)) + '\n', str(enumerate_paths(0))


def vacation(rng):
    days = [[rng.randint(1, 20) for _ in range(3)] for _ in range(rng.randint(1, 7))]
    answer = max(sum(days[i][activity] for i, activity in enumerate(schedule))
                 for schedule in product(range(3), repeat=len(days))
                 if all(a != b for a, b in zip(schedule, schedule[1:])))
    return str(len(days)) + '\n' + '\n'.join(' '.join(map(str, day)) for day in days) + '\n', str(answer)


GENERATORS = {
    'cses-1643': lambda r: array_case(r, 'maximum'),
    'cses-1141': lambda r: array_case(r, 'playlist'),
    'cses-1661': lambda r: array_case(r, 'subarray'),
    'cses-1145': lambda r: array_case(r, 'lis'),
    'cses-1620': factory,
    'cses-1084': apartments,
    'cses-1090': ferris,
    'cses-1629': movies,
    'cses-1634': lambda r: coins(r, False),
    'cses-1636': lambda r: coins(r, True),
    'cses-1158': books,
    'cses-1671': lambda r: graph_case(r, 'shortest'),
    'cses-1675': lambda r: graph_case(r, 'mst'),
    'cses-1668': lambda r: graph_case(r, 'teams'),
    'cses-1679': lambda r: graph_case(r, 'topological'),
    'cses-1648': lambda r: ranges(r, False),
    'cses-1649': lambda r: ranges(r, True),
    'cses-1753': matching,
    'atcoder-dp_b': frog,
    'atcoder-dp_c': vacation,
}
GENERATORS.update(EXTENDED_GENERATORS)


def run(cases, seed):
    total = 0
    for key, generator in GENERATORS.items():
        # Separate streams keep later suites stable if an earlier generator changes.
        rng = random.Random(f'{seed}:{key}')
        problem = cp.find_problem(key)
        binary = cp.compile_source(cp.ROOT / problem['solution'])
        for index in range(cases):
            input_text, expected = generator(rng)
            case = {'name': f'seed-{seed}-case-{index}', 'input': input_text, 'output': expected}
            try:
                actual = cp.run_binary(binary, input_text)
                if problem.get('checker') == 'lcs' and len(actual.strip()) != len(expected):
                    raise ValueError(f'Exhaustive subsequences give LCS length {len(expected)}, got {actual!r}')
                if not cp.validate(problem, case, actual):
                    raise ValueError(f'Expected {expected!r}, got {actual!r}')
            except Exception as error:
                path = cp.ROOT / '.build' / f'{key}-failure.json'
                path.write_text(json.dumps(case, indent=2) + '\n')
                raise ValueError(f'{key}: {error}. Reproduction saved to {path}') from error
            total += 1
        print(f'PASS differential {key}: {cases} cases (seed {seed})', flush=True)
    print(f'PASS differential total: {total} cases across {len(GENERATORS)} solutions')
