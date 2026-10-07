# Adding a solution

1. Keep the source standalone, in `solutions/<platform>/<category>/`.
2. Link the official problem; write your own explanation under `notes/<platform>/`.
3. Add a record to `data/problems.json` using an existing record as the schema.
4. Add original test cases in `tests/cases/<id>.json`. Cover a smallest input, the main algorithmic trap, and a boundary case. `tokens` compares whitespace-separated tokens exactly. `bipartite` and `topological` validate non-unique outputs; their fixture output must correctly establish feasibility.
5. Run `python3 tools/cp.py index`, `python3 tools/cp.py check`, and `python3 tools/cp.py test <id> --sanitize`.
6. For a subtle algorithm, add a simple independent oracle to `tools/stress.py`.
7. Record acceptance only after a real judge verdict. Keep official statements on their original platforms.

Use standard C++17 headers and descriptive variable names. State time and space bounds. Prefer iterative traversals when input depth can exceed the call stack. A solution, its explanation, and its tests belong in one coherent commit.

Do not commit compiler outputs, credentials, editor caches, or unrelated files. Personal scratch attempts live in ignored `practice/`.
