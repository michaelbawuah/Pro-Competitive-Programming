# Adding a solution

1. Keep the source standalone, in `solutions/<platform>/<category>/`.
2. Link the official problem; write your own explanation under `notes/<platform>/`.
3. Add a record to `data/problems.json` using an existing record as the schema.
4. Add test cases in `tests/cases/<id>.json`. Cover a smallest input, the main algorithmic trap, and a boundary case. `tokens` compares whitespace-separated tokens exactly. Choose a semantic checker when the answer is not unique; see the table below.
5. Run `python3 tools/cp.py index`, `python3 tools/cp.py check`, and `python3 tools/cp.py test <id> --sanitize`.
6. For a subtle algorithm, add a simple independent oracle to `tools/stress.py` or `tools/stress_extended.py`. Generated constraint-limit regressions live in `tools/boundary.py`.
7. Record acceptance only after a real judge verdict. Keep official statements on their original platforms.

Use standard C++17 headers and descriptive variable names. State time and space bounds. Prefer iterative traversals when input depth can exceed the call stack. A solution, its explanation, and its tests belong in one coherent commit.

| Checker | What it verifies |
| --- | --- |
| `tokens` | Exact whitespace-separated output |
| `bipartite`, `topological` | A valid coloring or ordering; fixtures must correctly establish feasibility |
| `permutation`, `two_sets`, `palindrome` | Required elements and construction constraints, including impossible cases |
| `gray_code`, `hanoi` | Complete valid constructions and legal transitions |
| `labyrinth` | Reachability, every move, and shortest path length |
| `lcs` | Membership in both strings and optimal subsequence length |
| `probability` | A finite probability within the judge's 1e-9 absolute tolerance |

The semantic checkers accept alternative correct answers from your practice files. Keep fixture outputs valid too; catalogue validation checks them.

Do not commit compiler outputs, credentials, editor caches, or unrelated files. Personal scratch attempts live in ignored `practice/`.
