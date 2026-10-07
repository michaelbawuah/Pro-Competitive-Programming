# Cut

[Original problem](https://atcoder.jp/contests/abc368/tasks/abc368_a) · [C++ solution](../../solutions/atcoder/implementation/abc368_a_cut.cpp)

## Try first

The new top is the first of the original final K cards.

## Reasoning

The new top is the first of the original final K cards. Traverse cyclically from index N-K, preserving the order within both moved and remaining blocks.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
