# Attack

[Original problem](https://atcoder.jp/contests/abc302/tasks/abc302_a) · [C++ solution](../../solutions/atcoder/implementation/abc302_a_attack.cpp)

## Try first

Each attack removes B stamina.

## Reasoning

Each attack removes B stamina. Divide A by B and add one when a positive remainder needs an additional attack; this ceiling formula avoids adding large operands.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
