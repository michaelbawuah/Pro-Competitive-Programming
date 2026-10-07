# Delimiter

[Original problem](https://atcoder.jp/contests/abc344/tasks/abc344_b) · [C++ solution](../../solutions/atcoder/implementation/abc344_b_delimiter.cpp)

## Try first

Read values until the terminating zero, storing the zero as well.

## Reasoning

Read values until the terminating zero, storing the zero as well. Traverse the stored sequence backward to print the complete input in reverse.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
