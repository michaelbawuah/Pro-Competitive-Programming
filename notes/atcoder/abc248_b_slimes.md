# Slimes

[Original problem](https://atcoder.jp/contests/abc248/tasks/abc248_b) · [C++ solution](../../solutions/atcoder/implementation/abc248_b_slimes.cpp)

## Try first

Apply each multiplication until the first count reaches B.

## Reasoning

Apply each multiplication until the first count reaches B. Since K is at least two, counts strictly grow; the final product remains below 10^18 under the input bounds.

## Cost

- Time: **O(log_K(B/A)+1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
