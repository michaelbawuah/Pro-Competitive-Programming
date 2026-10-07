# Longest Path

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_g) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_g_longest_path.cpp)

## Try first

In a DAG, process each vertex only after all its predecessors.

## Reasoning

Let longest[v] be the maximum number of edges on a path ending at v. Every vertex permits an empty path of length zero. For each incoming edge u-to-v, a path ending at u can extend by one edge; take the largest such contribution. Kahn's ordering ensures all predecessors are final before processing v. The maximum over all vertices allows the path to start and finish anywhere.

## Cost

- Time: **O(n + m)**.
- Extra space: **O(n + m)**.

## C++ takeaway

A queue-based topological traversal handles a 100,000-vertex chain without recursion depth concerns.

## Watch for

Count edges, not vertices. Do not restrict the starting vertex to 1 or ignore disconnected components.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
