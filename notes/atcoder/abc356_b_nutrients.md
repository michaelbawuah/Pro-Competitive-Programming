# Nutrients

[Original problem](https://atcoder.jp/contests/abc356/tasks/abc356_b) · [C++ solution](../../solutions/atcoder/implementation/abc356_b_nutrients.cpp)

## Try first

Track the remaining requirement of every nutrient by subtracting each consumed amount.

## Reasoning

Track the remaining requirement of every nutrient by subtracting each consumed amount. All targets are met exactly when every remaining requirement is nonpositive.

## Cost

- Time: **O(NM)**.
- Extra space: **O(M)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
