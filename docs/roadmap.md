# Practice route

Use this as a progression, not a completed-achievements list. Move forward when you can explain and reimplement the technique without reading a reference.

| Stage | Problems to attempt in order | C++ focus | Completion check |
| --- | --- | --- | --- |
| 1. Input and invariants | CSES 1083, 1069, 1094; CF 4A, 71A, 231A, 158A | I/O, strings, references, 64-bit arithmetic | Explain every variable and pass boundary cases |
| 2. Sorting and windows | CSES 1621, 1084, 1090, 1629, 1141 | STL sorting, pairs, maps, iterator semantics | Give an exchange argument or window invariant |
| 3. Prefix sums and search | CSES 1646, 1661, 1620, 1643 | Overflow, lambdas, monotone predicates | Compare against a brute-force version |
| 4. Dynamic programming | AtCoder dp_a, dp_b, dp_c; CSES 1633, 1634, 1636, 1158, 1639, 1145 | State definitions, loop order, memory reduction | Derive the recurrence on paper before coding |
| 5. Graphs | CSES 1192, 1668, 1679, 1671, 1675 | Queues, heaps, adjacency lists, DSU | Explain disconnected graphs, cycles, and stale entries |
| 6. Queries and strings | CSES 1648, 1649, 1753; then 1617, 1618 | Data structures, bit operations, prefix links | Implement the technique from a blank file |

## A practice session

1. Open the original statement with `python3 tools/cp.py info cses-1083`.
2. Create a blank attempt with `python3 tools/cp.py practice cses-1083`.
3. Spend a focused attempt deriving an approach. Write the complexity and one likely failure case.
4. If stuck, request only the hint with `python3 tools/cp.py hint cses-1083`.
5. Run `python3 tools/cp.py test cses-1083 --source practice/cses-1083.cpp`.
6. Submit on the original judge. Local tests cover selected cases; the judge runs its own hidden tests.
7. Read the notes, record your mistake, and revisit the problem later from a blank file.

## Build a useful commit history

After a successful personal attempt, archive the solution you understand, update its explanation, include the case that caught your mistake, and commit that complete change. Record the actual submission URL in `data/acceptances.json`. A refactor or regression fix is also a meaningful commit.

Suggested commit messages: `solve(cses): explain missing-number invariant`, `fix(dp): prevent repeated use of a book`, `test(graphs): cover disconnected components`.

## Move to timed practice

Once the foundations are comfortable, choose a short virtual set from an official archive. Work without the local reference solutions, record which problems you finished within the time limit, then upsolve the rest. Use `contests/template.md` to distinguish virtual practice from live results. A rating or rank belongs in the journal only when its official source is available.

Next topics beyond this starter: tree traversals and binary lifting, strongly connected components, lazy propagation, modular inverses, bitmask DP, and flow. Add them when an actual practice problem motivates the technique.
