# Power

[Original problem](https://atcoder.jp/contests/abc283/tasks/abc283_a) · [C++ solution](../../solutions/atcoder/implementation/abc283_a_power.cpp)

## Try first

Multiply by A exactly B times starting from one.

## Reasoning

Multiply by A exactly B times starting from one. Integer arithmetic computes the small bounded power exactly.

## Cost

- Time: **O(B)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
