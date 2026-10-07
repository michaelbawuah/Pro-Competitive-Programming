# A^A

[Original problem](https://atcoder.jp/contests/abc327/tasks/abc327_b) · [C++ solution](../../solutions/atcoder/implementation/abc327_b_a_a.cpp)

## Try first

The function A^A is strictly increasing for positive integers.

## Reasoning

The function A^A is strictly increasing for positive integers. Since 16^16 exceeds 10^18 while 15^15 fits signed 64-bit arithmetic, only A from one through fifteen need exact multiplication.

## Cost

- Time: **O(15^2)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
