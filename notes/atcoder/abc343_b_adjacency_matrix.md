# Adjacency Matrix

[Original problem](https://atcoder.jp/contests/abc343/tasks/abc343_b) · [C++ solution](../../solutions/atcoder/implementation/abc343_b_adjacency_matrix.cpp)

## Try first

A one in adjacency-matrix row i marks a neighbor of vertex i.

## Reasoning

A one in adjacency-matrix row i marks a neighbor of vertex i. Scan columns in increasing order and output their one-based indices, keeping a separate output line for each row.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
