# Savings

[Original problem](https://atcoder.jp/contests/abc206/tasks/abc206_b) · [C++ solution](../../solutions/atcoder/implementation/abc206_b_savings.cpp)

## Try first

Accumulate daily deposits in chronological order until the first total meeting the target.

## Reasoning

Accumulate daily deposits in chronological order until the first total meeting the target. Positive deposits make the first such day minimal.

## Cost

- Time: **O(sqrt(N))**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
