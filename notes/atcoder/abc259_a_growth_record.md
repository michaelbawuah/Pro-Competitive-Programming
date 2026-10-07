# Growth Record

[Original problem](https://atcoder.jp/contests/abc259/tasks/abc259_a) · [C++ solution](../../solutions/atcoder/implementation/abc259_a_growth_record.cpp)

## Try first

All growth has finished by age X.

## Reasoning

All growth has finished by age X. Rewind only the growth years between M and X when M is below X; ages at least X retain height T.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
