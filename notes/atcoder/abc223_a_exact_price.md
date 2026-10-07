# Exact Price

[Original problem](https://atcoder.jp/contests/abc223/tasks/abc223_a) · [C++ solution](../../solutions/atcoder/implementation/abc223_a_exact_price.cpp)

## Try first

One or more hundred-yen coins produce exactly the positive multiples of one hundred; zero is excluded.

## Reasoning

One or more hundred-yen coins produce exactly the positive multiples of one hundred; zero is excluded.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
