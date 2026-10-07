# Verification record

Verified locally on 2026-10-07, Linux x86-64, GCC 13.3.0, Python 3.12.14.

| Check | Result |
| --- | --- |
| Standalone C++17 builds, warnings as errors | 36 passed |
| Fixed input/output cases | 109 passed |
| Undefined-behavior sanitizer and GCC library assertions | All 36 solutions and the algorithm library passed |
| Library property comparisons | 32,040 checks passed |
| Differential tests against independent small-input oracles | 2,000 cases across 20 solutions passed, seed 2110 |
| Runner behavior tests | 8 passed: alternative valid outputs, wrong answers, process errors, timeouts, and preserving practice files |
| Catalogue consistency | All 36 sources, explanations, and fixture files indexed |

## Reproduce

```sh
python3 tools/cp.py check
python3 tools/cp.py test all
python3 tools/cp.py test all --sanitize
python3 tools/cp.py stress --cases 100 --seed 2110
python3 -m unittest discover -s tests -p 'test_*.py' -v
```

The checked source/test input fingerprint is `b9905bed3843872fb253a25ed1c73ea6340aa5938b09d40f039f2c9ee78dc4d4`.
This is SHA-256 over sorted paths, a zero separator, file bytes, and another zero separator for every solution `.cpp`, library `.hpp`, tool `.py`, fixture `.json`, `tests/library_test.cpp`, `tests/test_runner.py`, and `data/problems.json`.

## Scope

These are local correctness checks on selected fixed cases and small random inputs, not official judge verdicts or exhaustive correctness proofs. The repository contains no recorded judge acceptances or contest rankings. GitHub Actions is configured for Linux/GCC and macOS/Clang; hosted CI and a real macOS run have not yet been observed for this version.

The first fixed-case run caught an incorrect hand-written expected answer for Subarray Sums II. Direct enumeration confirmed three matching subarrays, the fixture was corrected, and the solution subsequently passed the fixed and differential checks.
