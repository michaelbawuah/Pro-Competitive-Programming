# 1D Pawn

[Original problem](https://atcoder.jp/contests/abc257/tasks/abc257_b) · [C++ solution](../../solutions/atcoder/implementation/abc257_b_1d_pawn.cpp)

## Try first

Pieces never cross, so their left-to-right indices remain fixed.

## Reasoning

Pieces never cross, so their left-to-right indices remain fixed. A selected piece may advance exactly when it is below N and its next cell is before the following piece.

## Cost

- Time: **O(K+Q)**.
- Extra space: **O(K)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
