# Difference Max

[Original problem](https://atcoder.jp/contests/abc196/tasks/abc196_a) · [C++ solution](../../solutions/atcoder/implementation/abc196_a_difference_max.cpp)

## Try first

Increase x and decrease y to maximize their difference; both interval endpoints are allowed..

## Reasoning

Increase x and decrease y to maximize their difference; both interval endpoints are allowed.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
