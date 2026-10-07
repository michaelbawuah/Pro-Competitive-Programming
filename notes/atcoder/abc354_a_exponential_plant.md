# Exponential Plant

[Original problem](https://atcoder.jp/contests/abc354/tasks/abc354_a) · [C++ solution](../../solutions/atcoder/implementation/abc354_a_exponential_plant.cpp)

## Try first

Simulate nightly growth powers from one upward.

## Reasoning

Simulate nightly growth powers from one upward. Each night advances to the following morning; stop at the first morning with height strictly greater than H.

## Cost

- Time: **O(log H)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
