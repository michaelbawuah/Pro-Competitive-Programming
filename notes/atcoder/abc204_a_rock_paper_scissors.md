# Rock-paper-scissors

[Original problem](https://atcoder.jp/contests/abc204/tasks/abc204_a) · [C++ solution](../../solutions/atcoder/implementation/abc204_a_rock_paper_scissors.cpp)

## Try first

A three-player draw has all hands equal or all three different.

## Reasoning

A three-player draw has all hands equal or all three different. Match equal known hands; otherwise supply the missing hand.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
