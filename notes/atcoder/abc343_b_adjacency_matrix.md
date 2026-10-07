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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
