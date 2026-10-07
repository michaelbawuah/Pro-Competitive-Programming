# Water Station

[Original problem](https://atcoder.jp/contests/abc305/tasks/abc305_a) · [C++ solution](../../solutions/atcoder/implementation/abc305_a_water_station.cpp)

## Try first

For integer positions, remainders zero through two round down to a multiple of five, and remainders three or four round up.

## Reasoning

For integer positions, remainders zero through two round down to a multiple of five, and remainders three or four round up. Adding two before division implements those cases.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
