# Grid 1

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_h) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_h_grid_1.cpp)

## Try first

Combine paths arriving from above and left, treating walls as zero-count cells.

## Reasoning

Every path to an open non-start cell ends in exactly one of two moves: down from above or right from the left. Their path sets are disjoint, so add their counts. Scanning left to right keeps the previous row count at ways[c] until it is consumed, while ways[c-1] is already current. Walls clear their count, preventing paths from crossing them.

## Cost

- Time: **O(H W)**.
- Extra space: **O(W)**.

## C++ takeaway

The DP vector follows the width; keeping height and width separate prevents square-grid assumptions.

## Watch for

This problem uses # for walls. Start with one way at the origin, and reduce every addition modulo 1,000,000,007.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
