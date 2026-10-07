# Guess The Number

[Original problem](https://atcoder.jp/contests/abc157/tasks/abc157_c) · [C++ solution](../../solutions/atcoder/implementation/abc157_c_guess_the_number.cpp)

## Try first

Enumerate candidates in increasing numeric order, checking the exact digit count and every digit constraint.

## Reasoning

Enumerate candidates in increasing numeric order, checking the exact digit count and every digit constraint. Decimal conversion naturally excludes leading zeros except for zero itself.

## Cost

- Time: **O(10^N M)**.
- Extra space: **O(M+N)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
