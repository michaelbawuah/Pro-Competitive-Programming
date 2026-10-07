# Hydrate

[Original problem](https://atcoder.jp/contests/abc207/tasks/abc207_b) · [C++ solution](../../solutions/atcoder/implementation/abc207_b_hydrate.cpp)

## Try first

After k operations the objective is A <= k(CD-B).

## Reasoning

After k operations the objective is A <= k(CD-B). A nonpositive gain can never reach positive A; otherwise ceiling-divide A by the gain.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
