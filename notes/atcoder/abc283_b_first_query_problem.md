# First Query Problem

[Original problem](https://atcoder.jp/contests/abc283/tasks/abc283_b) · [C++ solution](../../solutions/atcoder/implementation/abc283_b_first_query_problem.cpp)

## Try first

Maintain the current array directly.

## Reasoning

Maintain the current array directly. A type-one query overwrites one element; a type-two query reads the latest stored value at its index.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
