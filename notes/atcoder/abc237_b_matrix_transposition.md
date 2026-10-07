# Matrix Transposition

[Original problem](https://atcoder.jp/contests/abc237/tasks/abc237_b) · [C++ solution](../../solutions/atcoder/implementation/abc237_b_matrix_transposition.cpp)

## Try first

Transposition exchanges row and column indices.

## Reasoning

Transposition exchanges row and column indices. Output each original column as a new row, preserving its top-to-bottom order.

## Cost

- Time: **O(HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
