# Batters

[Original problem](https://atcoder.jp/contests/abc256/tasks/abc256_b) · [C++ solution](../../solutions/atcoder/implementation/abc256_b_batters.cpp)

## Try first

Insert the new batter at zero, then move every existing piece into a fresh array so movement is simultaneous.

## Reasoning

Insert the new batter at zero, then move every existing piece into a fresh array so movement is simultaneous. Destinations at least four score and disappear.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
