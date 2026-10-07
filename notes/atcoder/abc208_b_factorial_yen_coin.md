# Factorial Yen Coin

[Original problem](https://atcoder.jp/contests/abc208/tasks/abc208_b) · [C++ solution](../../solutions/atcoder/implementation/abc208_b_factorial_yen_coin.cpp)

## Try first

Use the largest factorial coin possible.

## Reasoning

Use the largest factorial coin possible. Since each denomination is an integer multiple of the preceding one, replacing smaller groups by larger coins never increases the coin count.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
