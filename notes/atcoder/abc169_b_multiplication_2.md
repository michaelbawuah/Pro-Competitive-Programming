# Multiplication 2

[Original problem](https://atcoder.jp/contests/abc169/tasks/abc169_b) · [C++ solution](../../solutions/atcoder/implementation/abc169_b_multiplication_2.cpp)

## Try first

Check for zero before overflow handling because it makes the entire product zero.

## Reasoning

Check for zero before overflow handling because it makes the entire product zero. Otherwise test product > limit/next before multiplying to prevent overflow.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
