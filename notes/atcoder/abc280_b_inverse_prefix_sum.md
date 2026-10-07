# Inverse Prefix Sum

[Original problem](https://atcoder.jp/contests/abc280/tasks/abc280_b) · [C++ solution](../../solutions/atcoder/implementation/abc280_b_inverse_prefix_sum.cpp)

## Try first

Subtract consecutive prefix sums to isolate each original element.

## Reasoning

Subtract consecutive prefix sums to isolate each original element. Treat the prefix before the first element as zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
