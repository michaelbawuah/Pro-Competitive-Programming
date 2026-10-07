# Explore

[Original problem](https://atcoder.jp/contests/abc265/tasks/abc265_b) · [C++ solution](../../solutions/atcoder/implementation/abc265_b_explore.cpp)

## Try first

Move along the only possible route, paying each cost before collecting the destination bonus.

## Reasoning

Move along the only possible route, paying each cost before collecting the destination bonus. A zero or negative balance prevents arrival and cannot be rescued by that bonus.

## Cost

- Time: **O(N+M)**.
- Extra space: **O(N)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
