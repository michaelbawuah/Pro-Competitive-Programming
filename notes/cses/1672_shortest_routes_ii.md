# Shortest Routes II

[Original problem](https://cses.fi/problemset/task/1672/) · [C++ solution](../../solutions/cses/graphs/1672_shortest_routes_ii.cpp)

## Try first

Use each vertex in turn as an allowed intermediate vertex.

## Reasoning

Before processing middle k, distance[a][b] is the shortest route whose intermediate vertices precede k. Such a route either avoids k or passes through it, splitting into a-to-k and k-to-b routes. Taking the smaller choice maintains the invariant. After every vertex has been considered, all routes are allowed. Positive weights prevent beneficial cycles.

## Cost

- Time: **O(n^3 + m + q)**.
- Extra space: **O(n^2)**.

## C++ takeaway

Choose a long long infinity with room for addition and skip unreachable states explicitly.

## Watch for

Keep the minimum of parallel edge weights, add both directions, and put the intermediate-vertex loop outermost.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
