# Full Moon

[Original problem](https://atcoder.jp/contests/abc318/tasks/abc318_a) · [C++ solution](../../solutions/atcoder/implementation/abc318_a_full_moon.cpp)

## Try first

If the first full moon is after N, none occurs in range.

## Reasoning

If the first full moon is after N, none occurs in range. Otherwise count that first event plus the complete P-day intervals that still fit before N.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
