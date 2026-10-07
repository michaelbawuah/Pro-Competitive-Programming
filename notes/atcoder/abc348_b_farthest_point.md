# Farthest Point

[Original problem](https://atcoder.jp/contests/abc348/tasks/abc348_b) · [C++ solution](../../solutions/atcoder/implementation/abc348_b_farthest_point.cpp)

## Try first

Squared Euclidean distances have the same ordering as distances.

## Reasoning

Squared Euclidean distances have the same ordering as distances. Scan candidate IDs in increasing order and update only for a strict improvement, preserving the smallest ID when distances tie.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
