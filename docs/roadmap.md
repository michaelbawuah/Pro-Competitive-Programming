# Practice route

Use this as a progression, not a completed-achievements list. Move forward when you can explain and reimplement the technique without reading a reference.

| Stage | Problems to attempt in order | C++ focus | Completion check |
| --- | --- | --- | --- |
| 1. Input and invariants | CSES 1083, 1069, 1094; CF 4A, 71A, 231A, 158A | I/O, strings, references, 64-bit arithmetic | Explain every variable and pass boundary cases |
| 2. Sorting and windows | CSES 1621, 1084, 1090, 1629, 1141 | STL sorting, pairs, maps, iterator semantics | Give an exchange argument or window invariant |
| 3. Prefix sums and search | CSES 1646, 1661, 1620, 1643 | Overflow, lambdas, monotone predicates | Compare against a brute-force version |
| 4. Dynamic programming | AtCoder dp_a, dp_b, dp_c; CSES 1633, 1634, 1636, 1158, 1639, 1145 | State definitions, loop order, memory reduction | Derive the recurrence on paper before coding |
| 5. Graphs | CSES 1192, 1668, 1679, 1671, 1675 | Queues, heaps, adjacency lists, DSU | Explain disconnected graphs, cycles, and stale entries |
| 6. Range queries | CSES 1650, 1648, 1649, 1651 | XOR, Fenwick trees, difference arrays, segment trees | Explain inclusive boundaries and update direction |
| 7. Trees | CSES 1674, 1131, 1132, 1687 | Iterative traversal, diameter endpoints, binary lifting | Handle a 200,000-node chain without recursion |
| 8. DP extensions | AtCoder dp_d, dp_e, dp_f, dp_g, dp_h, dp_i, dp_k; CSES 1746, 1140 | State redesign, reconstruction, probability, optimal play | Explain why each state stores enough information |
| 9. Strings and number theory | CSES 1753, 1732, 1733, 1095, 1712, 1713, 1081 | Prefix links, Z values, exponentiation, sieves | Identify the exact preconditions of each technique |

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

The expanded catalogue also includes constructive problems, backtracking, ordered containers, and shortest paths with an extra state. Use its tags to find another problem on a technique you want to reinforce.

Next topics beyond these 100: strongly connected components, lazy propagation, modular inverses, bitmask DP, and flow. Add them when an actual practice problem motivates the technique.
