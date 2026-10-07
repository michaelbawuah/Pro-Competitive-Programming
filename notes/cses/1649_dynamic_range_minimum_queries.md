# Dynamic Range Minimum Queries

[Original problem](https://cses.fi/problemset/task/1649/) · [C++ solution](../../solutions/cses/range_queries/1649_dynamic_range_minimum_queries.cpp)

## Try first

Each node stores the minimum of its interval; queries combine disjoint covered intervals.

## Reasoning

Building merges child minima bottom-up. A point assignment changes only ancestors of its leaf. During a query, consume boundary nodes completely inside the requested half-open range, then move both boundaries to their parents. The selected intervals partition the query.

## Cost

- Time: **O(n + q log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Convert a 1-based inclusive input [a,b] into a 0-based half-open range [a-1,b).

## Watch for

Unused leaves must contain the minimum operation’s identity: positive infinity.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
