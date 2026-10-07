# Contest Result

[Original problem](https://atcoder.jp/contests/abc290/tasks/abc290_a) · [C++ solution](../../solutions/atcoder/implementation/abc290_a_contest_result.cpp)

## Try first

Store each problem value and add the values indexed by the distinct solved problem numbers.

## Reasoning

Store each problem value and add the values indexed by the distinct solved problem numbers. Convert the one-based indices before access.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
