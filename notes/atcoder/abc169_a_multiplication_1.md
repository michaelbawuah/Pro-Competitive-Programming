# Multiplication 1

[Original problem](https://atcoder.jp/contests/abc169/tasks/abc169_a) · [C++ solution](../../solutions/atcoder/implementation/abc169_a_multiplication_1.cpp)

## Try first

Read both operands and multiply them in an integer type wide enough for the bounded product..

## Reasoning

Read both operands and multiply them in an integer type wide enough for the bounded product.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
