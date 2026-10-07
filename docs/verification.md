# Verification record

Verified locally on 2026-10-07 with GCC 13.3.0 and Python 3.12.14 on Linux x86-64.

| Check | Result |
| --- | --- |
| Standalone C++17 builds, warnings as errors | 835 passed |
| Distinct fixed input/output cases | 2,964 passed |
| Undefined-behavior sanitizer and GCC library assertions | All 835 solutions and the algorithm library passed |
| Library property comparisons | 32,040 passed |
| Seeded differential and structural checks | 10,100 cases across 101 solutions, seed 2110 |
| Generated constraint-limit regressions | 31 passed |
| Runner, catalogue, and semantic-checker tests | 35 passed |
| Catalogue consistency | 835 distinct IDs, sources, explanations, and fixture files indexed |

## Reproduce

```sh
python3 tools/cp.py check
python3 tools/cp.py test all --jobs 4
python3 tools/cp.py test all --sanitize --jobs 4
python3 tools/cp.py stress --cases 100 --seed 2110
python3 tools/boundary.py
python3 -m unittest discover -s tests -p 'test_*.py' -v
```

Use one verification command at a time: independent commands share the local build directory.

The checked source/test input fingerprint is `9b8c2a61203085e2b2bae14b0fea87153d8b0615badff9bcfde719506602f67b`. This is SHA-256 over sorted relative paths, a zero separator, file bytes, and another zero separator for every solution `.cpp`, library `.hpp`, tool `.py`, fixture `.json`, `tests/library_test.cpp`, every `tests/test_*.py`, and `data/problems.json` (1688 files).

## Independent models

The oracle suites compare optimized solutions against exhaustive cut positions, subset schedules, direct query scans, BFS tree distances, ancestor walks, game-tree minimax, bin packing, and full-board tiling enumeration.

The final expansion adds 20 models. Examples include all rectangular inequalities for the adjacent-cell Monge test, BFS over position and hammer possession, arbitrary-precision product arithmetic, every total order consistent with a partial ranking, dynamic programming for egg purchases, exhaustive legal currency exchanges, generated typing mistakes with known correct positions, unit-cube intersections, dot products for right angles, and exhaustive choices of decrement pairs.

Every random suite has its own deterministic seed stream. On failure, the runner saves the complete reproducing input and expected answer under `.build/`.

## Boundary and evidence checks

Boundary regressions cover 200,000-node tree chains, 64-bit subtree and partition sums, a 5,000-element removal game, the complete 20-person elevator subset space, a 1,000-column domino board, signed endpoints at ±10^18, the unsigned 64-bit high bit, a 200,000-country currency chain, fifteen-place rounding carries, and 200,000 distinct sequence keys.

Catalogue validation rejects duplicate IDs, shared source/notes/fixture paths, duplicate fixture names, and duplicate fixture inputs that differ only in whitespace. Nine repeated sample/edge inputs were removed during the final audit, and the two-element maximum-exclusion task received a distinct extreme-value case. Two binary-domain tasks have two fixtures that exhaust their valid input domains; every other entry has at least three distinct fixture inputs.

The metadata test fixture canonicalizes its temporary root, matching the production runner. This handles macOS temporary-directory symlinks; the unit suite also passed locally with a deliberately symlinked temporary directory.

Numeric checkers reject nonfinite values and wrong output lengths. Semantic checkers validate nonunique constructions, optimal divisor ties, range multiples, unique letters, and excluded-sum digits instead of requiring one arbitrary sample answer.

## Scope and hosted checks

These are AI-assisted reference implementations. Passing selected local cases and invariants is not a claim of official judge acceptance, contest wins, or ratings. `data/acceptances.json` records only real judge evidence.

[GitHub Actions](https://github.com/michaelbawuah/Pro-Competitive-Programming/actions/workflows/verify.yml) verifies four disjoint shards on each of Linux/GCC and macOS/Clang. Linux also runs sanitizer and randomized checks; both platforms run the boundary suite. Consult the run associated with the published commit for its hosted result.
