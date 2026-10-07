# Good morning

[Original problem](https://atcoder.jp/contests/abc245/tasks/abc245_a) · [C++ solution](../../solutions/atcoder/implementation/abc245_a_good_morning.cpp)

## Try first

Compare minutes since midnight.

## Reasoning

Compare minutes since midnight. Equal minute values favor Takahashi because Aoki wakes one second later.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
