# Exponential or Quadratic

[Original problem](https://atcoder.jp/contests/abc238/tasks/abc238_a) · [C++ solution](../../solutions/atcoder/implementation/abc238_a_exponential_or_quadratic.cpp)

## Try first

Directly check N=1 through 4; only 1 succeeds.

## Reasoning

Directly check N=1 through 4; only 1 succeeds. At N=5 the inequality holds, and doubling N^2 exceeds (N+1)^2 for N>=3, so induction proves all larger cases.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
