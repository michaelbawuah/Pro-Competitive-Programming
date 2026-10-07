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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
