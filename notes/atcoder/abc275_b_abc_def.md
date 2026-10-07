# ABC-DEF

[Original problem](https://atcoder.jp/contests/abc275/tasks/abc275_b) · [C++ solution](../../solutions/atcoder/implementation/abc275_b_abc_def.cpp)

## Try first

Reduce each factor before multiplying and reduce after every multiplication.

## Reasoning

Reduce each factor before multiplying and reduce after every multiplication. Products of two reduced factors fit in signed 64-bit arithmetic; normalize the final modular difference to be nonnegative.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
