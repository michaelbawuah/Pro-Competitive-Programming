# Binary Alchemy

[Original problem](https://atcoder.jp/contests/abc370/tasks/abc370_b) · [C++ solution](../../solutions/atcoder/implementation/abc370_b_binary_alchemy.cpp)

## Try first

The combination table is stored in its lower triangle.

## Reasoning

The combination table is stored in its lower triangle. At each step, use the larger element number as the row and the smaller as the column, then carry the result into the next combination.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
