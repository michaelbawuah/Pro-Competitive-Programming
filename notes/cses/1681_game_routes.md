# Game Routes

[Original problem](https://cses.fi/problemset/task/1681/) · [C++ solution](../../solutions/cses/graphs/1681_game_routes.cpp)

## Try first

Process vertices after all of their incoming contributions are known.

## Reasoning

Kahn's algorithm produces a topological ordering of the given DAG. Seed one empty path at vertex 1. Every route to a successor ends with one incoming edge, so propagating ways[v] along each outgoing edge counts all routes exactly once. When a vertex leaves the queue, every predecessor has already contributed, making its count final.

## Cost

- Time: **O(n + m)**.
- Extra space: **O(n + m)**.

## C++ takeaway

A queue of zero-indegree vertices avoids recursive traversal on deep graphs.

## Watch for

Include all zero-indegree vertices in the queue, even those unreachable from 1. Numeric labels are not necessarily topologically ordered.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
