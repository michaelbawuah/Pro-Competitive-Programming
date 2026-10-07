# AtCoder Line

[Original problem](https://atcoder.jp/contests/abc352/tasks/abc352_a) · [C++ solution](../../solutions/atcoder/implementation/abc352_a_atcoder_line.cpp)

## Try first

Both travel directions visit exactly the station numbers between X and Y.

## Reasoning

Both travel directions visit exactly the station numbers between X and Y. Since all three stations differ, Z is visited precisely when it lies strictly between the endpoints.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
