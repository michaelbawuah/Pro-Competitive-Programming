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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
