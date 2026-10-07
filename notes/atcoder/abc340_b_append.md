# Append

[Original problem](https://atcoder.jp/contests/abc340/tasks/abc340_b) · [C++ solution](../../solutions/atcoder/implementation/abc340_b_append.cpp)

## Try first

Append queries extend a vector.

## Reasoning

Append queries extend a vector. The k-th value from the end has zero-based index size-k, and the input guarantees that this index exists.

## Cost

- Time: **O(Q)**.
- Extra space: **O(Q)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
