# Alloy

[Original problem](https://atcoder.jp/contests/abc212/tasks/abc212_a) · [C++ solution](../../solutions/atcoder/implementation/abc212_a_alloy.cpp)

## Try first

At least one component is positive.

## Reasoning

At least one component is positive. A missing component gives pure metal; two positive components give an alloy.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
