# 1-2-4 Test

[Original problem](https://atcoder.jp/contests/abc270/tasks/abc270_a) · [C++ solution](../../solutions/atcoder/implementation/abc270_a_1_2_4_test.cpp)

## Try first

The three problem scores are distinct powers of two, so each bit records whether that problem was solved.

## Reasoning

The three problem scores are distinct powers of two, so each bit records whether that problem was solved. Bitwise OR represents the union of both solved sets.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
