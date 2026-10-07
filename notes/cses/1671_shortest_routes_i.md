# Shortest Routes I

[Original problem](https://cses.fi/problemset/task/1671/) · [C++ solution](../../solutions/cses/graphs/1671_shortest_routes_i.cpp)

## Try first

Always expand the smallest unsettled distance.

## Reasoning

All edge costs are positive, so when the smallest current distance is removed from the heap, an alternative path through a farther vertex cannot improve it. Relax outgoing edges and ignore stale heap entries. The problem guarantees every vertex is reachable from vertex 1.

## Cost

- Time: **O((n + m) log(n + m))**.
- Extra space: **O(n + m)**.

## C++ takeaway

priority_queue is a max-heap by default; greater<State> makes it a min-heap. Distances need long long.

## Watch for

Edges are directed. A stale entry must not trigger a second full expansion.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
