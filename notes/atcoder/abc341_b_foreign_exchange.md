# Foreign Exchange

[Original problem](https://atcoder.jp/contests/abc341/tasks/abc341_b) · [C++ solution](../../solutions/atcoder/implementation/abc341_b_foreign_exchange.cpp)

## Try first

Exchanges only move currency toward the next country.

## Reasoning

Exchanges only move currency toward the next country. Process countries from left to right and exchange every complete bundle, since retaining usable earlier currency cannot improve the final amount. T<=S keeps the total units bounded by the initial total.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
