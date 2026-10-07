# Edge Checker 2

[Original problem](https://atcoder.jp/contests/abc285/tasks/abc285_a) · [C++ solution](../../solutions/atcoder/implementation/abc285_a_edge_checker_2.cpp)

## Try first

The diagram numbers a binary tree in heap order: the parent of node B is floor(B/2).

## Reasoning

The diagram numbers a binary tree in heap order: the parent of node B is floor(B/2). Since A is smaller, the pair shares an edge precisely when A is that parent.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
