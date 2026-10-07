# Hit and Blow

[Original problem](https://atcoder.jp/contests/abc243/tasks/abc243_b) · [C++ solution](../../solutions/atcoder/implementation/abc243_b_hit_and_blow.cpp)

## Try first

Compare every pair of positions across the sequences.

## Reasoning

Compare every pair of positions across the sequences. A matching pair contributes to hits when its indices agree and to blows otherwise. Distinct elements prevent duplicate counting.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
