# Integer Division Returns

[Original problem](https://atcoder.jp/contests/abc345/tasks/abc345_b) · [C++ solution](../../solutions/atcoder/implementation/abc345_b_integer_division_returns.cpp)

## Try first

Truncation toward zero already equals ceiling for negative values.

## Reasoning

Truncation toward zero already equals ceiling for negative values. Positive nonmultiples require adding one; exact multiples need no adjustment.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
