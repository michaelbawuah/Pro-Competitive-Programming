# Leyland Number

[Original problem](https://atcoder.jp/contests/abc320/tasks/abc320_a) · [C++ solution](../../solutions/atcoder/implementation/abc320_a_leyland_number.cpp)

## Try first

Compute both small integer powers by repeated multiplication, then add their exact values.

## Reasoning

Compute both small integer powers by repeated multiplication, then add their exact values. This avoids rounding from floating-point power functions.

## Cost

- Time: **O(A+B)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
