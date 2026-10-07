# On and Off

[Original problem](https://atcoder.jp/contests/abc228/tasks/abc228_a) · [C++ solution](../../solutions/atcoder/implementation/abc228_a_on_and_off.cpp)

## Try first

Measure elapsed hours clockwise from S.

## Reasoning

Measure elapsed hours clockwise from S. The light is on exactly before the elapsed duration from S to T, including S and excluding T.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
