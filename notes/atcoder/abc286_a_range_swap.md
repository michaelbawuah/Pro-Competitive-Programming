# Range Swap

[Original problem](https://atcoder.jp/contests/abc286/tasks/abc286_a) · [C++ solution](../../solutions/atcoder/implementation/abc286_a_range_swap.cpp)

## Try first

The two disjoint ranges have equal length.

## Reasoning

The two disjoint ranges have equal length. Swap corresponding elements at each offset, leaving every element outside the ranges unchanged.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
