# Yellow and Red Card

[Original problem](https://atcoder.jp/contests/abc292/tasks/abc292_b) · [C++ solution](../../solutions/atcoder/implementation/abc292_b_yellow_and_red_card.cpp)

## Try first

Store a dismissal score: a yellow adds one and a red sets it to two.

## Reasoning

Store a dismissal score: a yellow adds one and a red sets it to two. A player is removed exactly when the score reaches two.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
