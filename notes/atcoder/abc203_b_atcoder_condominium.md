# AtCoder Condominium

[Original problem](https://atcoder.jp/contests/abc203/tasks/abc203_b) · [C++ solution](../../solutions/atcoder/implementation/abc203_b_atcoder_condominium.cpp)

## Try first

Room number is 100 times its floor plus its room index.

## Reasoning

Room number is 100 times its floor plus its room index. Sum both independent contributions using arithmetic series.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
