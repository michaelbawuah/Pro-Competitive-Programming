# Subtree Queries

[Original problem](https://cses.fi/problemset/task/1137/) · [C++ solution](../../solutions/cses/fenwick/1137_subtree_queries.cpp)

## Try first

Depth-first preorder places each subtree in a contiguous interval beginning at its entry index and having its subtree size.

## Reasoning

Depth-first preorder places each subtree in a contiguous interval beginning at its entry index and having its subtree size. A Fenwick tree over that order turns value replacements into point updates and subtree sums into range queries.

## Cost

- Time: **O((n+q) log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
