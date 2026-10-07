# Pro Competitive Programming

Michael Baffour Awuah's workspace for learning algorithms, writing clear C++, and practicing under contest constraints.

Standalone C++17 solutions, a reusable algorithm library, explanations, and reproducible local checks. Each problem links to its original judge.

**100 reference solutions:** 76 CSES, 14 Codeforces, and 10 AtCoder. Every solution has an explanation and checked-in tests. Browse the [complete catalogue](docs/problems.md).

This project starts with AI-assisted reference implementations, sample cases, and original local tests. Judge acceptances and contest results are recorded separately, with evidence. See [progress](docs/progress.md).

## Start here

Requires **Python 3.10+** and a **C++17 compiler**. There are no Python packages to install.

```sh
python3 tools/cp.py list
python3 tools/cp.py practice cses-1083
python3 tools/cp.py test cses-1083 --source practice/cses-1083.cpp
python3 tools/cp.py hint cses-1083
```

Open the problem link, write your own solution in the generated practice file, test it, then submit on the judge. Read the reference implementation after your attempt. `practice/` stays local until you deliberately archive your work.

## Explore

| Area | Contents |
| --- | --- |
| [Problem index](docs/problems.md) | Source links, algorithms, complexity, and explanations |
| [CSES](solutions/cses) | Foundations through graphs, range queries, and strings |
| [Codeforces](solutions/codeforces) | Contest input handling and implementation practice |
| [AtCoder](solutions/atcoder) | Dynamic programming state transitions |
| [Algorithm library](include/cp) | Tested data structures and string algorithms |
| [C++ field notes](docs/cpp.md) | Types, references, STL, overflow, and indexing |
| [Practice route](docs/roadmap.md) | A staged path from basic C++ to timed sets |
| [Contest journal](contests/README.md) | Results, mistakes, and upsolving |

## Verify everything

```sh
python3 tools/cp.py test all
python3 tools/cp.py stress --cases 100
python3 tools/boundary.py
python3 tools/cp.py check
```

`test` compiles with warnings as errors and runs the checked-in cases. `stress` runs 5,900 seeded cases across 59 solutions, using independent small-input oracles and structural checks. `boundary.py` covers long chains, large totals, and other constraint limits. Local passing results are separate from official judge acceptance.

Each file in `solutions/` compiles independently; no local headers are needed when submitting. Use `CXX=clang++` or `CXX=g++` to select your compiler. On macOS, install Apple's command-line tools with `xcode-select --install`; the sources use standard headers instead of `bits/stdc++.h`.

The GitHub Actions workflow is configured for Linux/GCC and macOS/Clang. In VS Code, open the repository folder and choose **Tasks: Run Test Task**. See [verification](docs/verification.md) for the checks actually run on this version.

## Working agreement

Keep one meaningful change per commit: a solution and explanation, a regression fix, or a reusable technique. Add a test for the mistake that taught you something. Keep the actual submission URL when you record an acceptance.

Archive organization inspired by [thecodingwizard/competitive-programming](https://github.com/thecodingwizard/competitive-programming). This is an independently created project; it contains no copied solutions or inherited commit history. Problem statements remain on the original platforms.
