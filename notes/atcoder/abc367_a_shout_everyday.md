# Shout Everyday

[Original problem](https://atcoder.jp/contests/abc367/tasks/abc367_a) · [C++ solution](../../solutions/atcoder/implementation/abc367_a_shout_everyday.cpp)

## Try first

Measure both the shouting time and wake-up time clockwise from bedtime.

## Reasoning

Measure both the shouting time and wake-up time clockwise from bedtime. Since all times differ, shouting is possible exactly when its elapsed time lies beyond the sleeping interval.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
