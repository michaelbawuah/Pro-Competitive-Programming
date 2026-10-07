# Ancestor

[Original problem](https://atcoder.jp/contests/abc263/tasks/abc263_b) · [C++ solution](../../solutions/atcoder/implementation/abc263_b_ancestor.cpp)

## Try first

Follow parent links from N to one, counting edges.

## Reasoning

Follow parent links from N to one, counting edges. Parent indices strictly decrease, guaranteeing termination at the root and giving the exact number of generations.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
