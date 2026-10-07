# Mongeness

[Original problem](https://atcoder.jp/contests/abc224/tasks/abc224_b) · [C++ solution](../../solutions/atcoder/implementation/abc224_b_mongeness.cpp)

## Try first

Every required rectangular inequality is the sum of its adjacent two-by-two inequalities: all interior terms cancel.

## Reasoning

Every required rectangular inequality is the sum of its adjacent two-by-two inequalities: all interior terms cancel. Therefore checking adjacent cells is necessary and sufficient.

## Cost

- Time: **O(HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
