# Trapezoid Sum

[Original problem](https://atcoder.jp/contests/abc181/tasks/abc181_b) · [C++ solution](../../solutions/atcoder/implementation/abc181_b_trapezoid_sum.cpp)

## Try first

Each inclusive interval contributes its arithmetic-series sum.

## Reasoning

Each inclusive interval contributes its arithmetic-series sum. Add all contributions, including repeated values written by different operations.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
