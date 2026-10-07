# Rectangle Cutting

[Original problem](https://cses.fi/problemset/task/1744/) · [C++ solution](../../solutions/cses/dynamic_programming/1744_rectangle_cutting.cpp)

## Try first

Consider every possible first horizontal or vertical cut.

## Reasoning

Squares need zero cuts. Any legal solution for a nonsquare rectangle begins with a cut into two smaller rectangles. The remaining work on the pieces is independent, so its cost is one plus the optimal costs of both pieces. Trying every first cut includes an optimal one. Increasing height and width ensures both pieces have already been computed.

## Cost

- Time: **O(a b (a + b))**.
- Extra space: **O(a b)**.

## C++ takeaway

A vector of vectors makes a two-dimensional recurrence explicit; dimensions include a spare zero row and column.

## Watch for

A greedy largest-square cut is not guaranteed optimal. Count cuts, not resulting squares.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
