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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
