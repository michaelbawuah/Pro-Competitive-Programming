# Takahashi's Failure

[Original problem](https://atcoder.jp/contests/abc252/tasks/abc252_b) · [C++ solution](../../solutions/atcoder/implementation/abc252_b_takahashi_s_failure.cpp)

## Try first

Only foods with maximum tastiness can be selected.

## Reasoning

Only foods with maximum tastiness can be selected. A disliked food has positive selection probability exactly when its tastiness equals that maximum.

## Cost

- Time: **O(N+K)**.
- Extra space: **O(N)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
