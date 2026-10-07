# Verification record

Verified locally on 2026-10-07, Linux x86-64, GCC 13.3.0, Python 3.12.14.

| Check | Result |
| --- | --- |
| Standalone C++17 builds, warnings as errors | 100 passed |
| Fixed input/output cases | 301 passed |
| Undefined-behavior sanitizer and GCC library assertions | All 100 solutions and the algorithm library passed |
| Library property comparisons | 32,040 checks passed |
| Seeded differential and structural tests | 5,900 cases across 59 solutions passed, seed 2110 |
| Generated constraint-limit regressions | 11 passed: long chains, 64-bit totals, large digit queries, LCS, knapsack, and probability DP |
| Runner and checker behavior tests | 16 passed: alternative valid outputs, invalid constructions, probability tolerance, process errors, timeouts, and preserving practice files |
| Catalogue consistency | All 100 sources, explanations, and fixture files indexed |

## Reproduce

```sh
python3 tools/cp.py check
python3 tools/cp.py test all
python3 tools/cp.py test all --sanitize
python3 tools/cp.py stress --cases 100 --seed 2110
python3 tools/boundary.py
python3 -m unittest discover -s tests -p 'test_*.py' -v
```

The checked source/test input fingerprint is `99ca2e800043e090c732ddef06532fc89ae91541bc294ef033adcb9edd2c5f79`.
This is SHA-256 over sorted paths, a zero separator, file bytes, and another zero separator for every solution `.cpp`, library `.hpp`, tool `.py`, fixture `.json`, `tests/library_test.cpp`, every `tests/test_*.py`, and `data/problems.json` (213 files).

## Scope

These are local correctness checks on selected fixed cases, small random inputs, and targeted constraint limits. They are not official judge verdicts or exhaustive correctness proofs. The repository contains no recorded judge acceptances or contest rankings. [GitHub Actions](https://github.com/michaelbawuah/Pro-Competitive-Programming/actions) runs catalogue checks, runner tests, all fixtures, library tests, and constraint-limit regressions on Linux/GCC and macOS/Clang. Linux additionally runs the undefined-behavior sanitizer and seeded differential suite. Consult the workflow run for the exact commit when checking hosted results.

The randomized suite includes exhaustive subsets, task permutations, legal tower assignments, simple flight routes, game trees, and coin-toss outcomes. Tree eccentricities are compared with searches from every vertex, and Floyd-Warshall answers with Bellman-Ford. Labyrinth cases use an independent structural checker for reachability, shortest length, and legal moves. LCS results are also compared with exhaustive subsequence enumeration.

The first fixed-case run caught an incorrect hand-written expected answer for Subarray Sums II. Direct enumeration confirmed three matching subarrays, the fixture was corrected, and the solution subsequently passed the fixed and differential checks.
