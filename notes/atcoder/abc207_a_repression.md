# Repression

[Original problem](https://atcoder.jp/contests/abc207/tasks/abc207_a) · [C++ solution](../../solutions/atcoder/implementation/abc207_a_repression.cpp)

## Try first

Picking the two largest values is equivalent to subtracting the minimum from the sum of all three.

## Reasoning

Picking the two largest values is equivalent to subtracting the minimum from the sum of all three.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
