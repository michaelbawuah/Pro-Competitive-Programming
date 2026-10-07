# Rolling Dice

[Original problem](https://atcoder.jp/contests/abc208/tasks/abc208_a) · [C++ solution](../../solutions/atcoder/implementation/abc208_a_rolling_dice.cpp)

## Try first

Starting with all ones gives sum A; distributing up to five extra pips per die reaches every integer through 6A.

## Reasoning

Starting with all ones gives sum A; distributing up to five extra pips per die reaches every integer through 6A.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
