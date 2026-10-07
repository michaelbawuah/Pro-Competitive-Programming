# 2^N

[Original problem](https://atcoder.jp/contests/abc256/tasks/abc256_a) · [C++ solution](../../solutions/atcoder/implementation/abc256_a_2_n.cpp)

## Try first

Shifting the integer one left by N positions produces 2^N.

## Reasoning

Shifting the integer one left by N positions produces 2^N. A 64-bit literal safely covers the full permitted exponent range.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
