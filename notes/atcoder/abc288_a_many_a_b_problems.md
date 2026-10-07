# Many A+B Problems

[Original problem](https://atcoder.jp/contests/abc288/tasks/abc288_a) · [C++ solution](../../solutions/atcoder/implementation/abc288_a_many_a_b_problems.cpp)

## Try first

Each pair is independent.

## Reasoning

Each pair is independent. Read both values in a signed wide type and output their sum on its own line.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
