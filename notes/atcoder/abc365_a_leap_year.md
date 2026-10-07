# Leap Year

[Original problem](https://atcoder.jp/contests/abc365/tasks/abc365_a) · [C++ solution](../../solutions/atcoder/implementation/abc365_a_leap_year.cpp)

## Try first

A leap year is divisible by four, except century years must also be divisible by four hundred.

## Reasoning

A leap year is divisible by four, except century years must also be divisible by four hundred. Add one day exactly when this predicate holds.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
