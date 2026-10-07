# Star or Not

[Original problem](https://atcoder.jp/contests/abc225/tasks/abc225_b) · [C++ solution](../../solutions/atcoder/implementation/abc225_b_star_or_not.cpp)

## Try first

In a tree with N-1 edges, a vertex of degree N-1 touches every edge and every other vertex.

## Reasoning

In a tree with N-1 edges, a vertex of degree N-1 touches every edge and every other vertex. This is exactly a star center.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
