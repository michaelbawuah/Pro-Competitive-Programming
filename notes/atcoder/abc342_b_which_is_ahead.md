# Which is ahead?

[Original problem](https://atcoder.jp/contests/abc342/tasks/abc342_b) · [C++ solution](../../solutions/atcoder/implementation/abc342_b_which_is_ahead.cpp)

## Try first

Invert the permutation so every person number maps to its position.

## Reasoning

Invert the permutation so every person number maps to its position. A query is then a constant-time comparison of the two positions.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
