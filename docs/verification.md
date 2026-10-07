# Verification record

Verified locally on 2026-10-07 with GCC 13.3.0 and Python 3.12.14 on Linux x86-64.

| Check | Result |
| --- | --- |
| Standalone C++17 builds, warnings as errors | 300 passed |
| Fixed input/output cases | 1,034 passed |
| Undefined-behavior sanitizer and GCC library assertions | All 300 solutions and the algorithm library passed |
| Library property comparisons | 32,040 passed |
| Seeded differential and structural checks | 8,100 cases across 81 solutions, seed 2110 |
| Generated constraint-limit regressions | 21 passed |
| Runner and semantic-checker tests | 24 passed |
| Catalogue consistency | 300 distinct IDs, sources, explanations, and fixture files indexed |

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

The checked source/test input fingerprint is `0789fdb456aced90bdcece54493657a702fb764b7752ae06212190d8511a7c0d`. This is SHA-256 over sorted relative paths, a zero separator, file bytes, and another zero separator for every solution `.cpp`, library `.hpp`, tool `.py`, fixture `.json`, `tests/library_test.cpp`, every `tests/test_*.py`, and `data/problems.json` (615 files).

## Expanded coverage

The new oracle module checks all 20 added CSES algorithms and two AtCoder algorithms. It uses exhaustive cut positions for array partitioning, subset overlap checks for multi-viewer scheduling, direct scans for queries, BFS for tree distances, explicit ancestor walks, game-tree minimax, exhaustive bin packing, full-board domino enumeration, and rectangle tiling enumeration. These oracles differ from the optimized implementations.

Boundary regressions include 200,000-node tree chains, 64-bit subtree and partition sums, a 5,000-element removal game, the complete 20-person elevator subset space, a 1,000-column domino board, and an interval ending at 10^18. The earlier string, probability, graph, and knapsack limit cases remain included.

## Scope

Passing local checks is separate from official judge acceptance. These tests cover selected inputs and invariants, not every possible case. `data/acceptances.json` records only real judge evidence; this archive does not claim contest wins or ratings.

[GitHub Actions](https://github.com/michaelbawuah/Pro-Competitive-Programming/actions) verifies four disjoint shards on each of Linux/GCC and macOS/Clang. Linux also runs sanitizer and randomized checks. Consult the workflow for the exact published commit and its hosted result.
