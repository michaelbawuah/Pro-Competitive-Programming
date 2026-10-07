# Synthetic Kadomatsu

[Original problem](https://atcoder.jp/contests/abc119/tasks/abc119_c) · [C++ solution](../../solutions/atcoder/enumeration/abc119_c_synthetic_kadomatsu.cpp)

## Try first

Assign each bamboo to one of the three targets or leave it unused.

## Reasoning

Assign each bamboo to one of the three targets or leave it unused. For a nonempty group, joining k pieces costs 10(k-1), then length adjustment costs the absolute difference. Enumerating all assignments covers every possible construction.

## Cost

- Time: **O(n 4^n)**.
- Extra space: **O(n)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
