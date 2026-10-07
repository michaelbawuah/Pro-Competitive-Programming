# Christmas Trees

[Original problem](https://atcoder.jp/contests/abc334/tasks/abc334_b) · [C++ solution](../../solutions/atcoder/implementation/abc334_b_christmas_trees.cpp)

## Try first

Trees correspond to integers k with L-A <= kM <= R-A.

## Reasoning

Trees correspond to integers k with L-A <= kM <= R-A. Count them as floor((R-A)/M) minus floor((L-A-1)/M), correcting C++ division for negative nonmultiples. All shifted endpoints fit signed 64-bit arithmetic.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
