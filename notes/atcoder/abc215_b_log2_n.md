# log2(N)

[Original problem](https://atcoder.jp/contests/abc215/tasks/abc215_b) · [C++ solution](../../solutions/atcoder/implementation/abc215_b_log2_n.cpp)

## Try first

Repeated halving counts how many powers of two fit below N.

## Reasoning

Repeated halving counts how many powers of two fit below N. It avoids floating logarithm errors at exact powers.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
