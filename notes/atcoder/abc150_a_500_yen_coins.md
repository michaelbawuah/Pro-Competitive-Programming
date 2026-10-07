# 500 Yen Coins

[Original problem](https://atcoder.jp/contests/abc150/tasks/abc150_a) · [C++ solution](../../solutions/atcoder/implementation/abc150_a_500_yen_coins.cpp)

## Try first

Multiply coin count by denomination and compare the total with the requested amount inclusively..

## Reasoning

Multiply coin count by denomination and compare the total with the requested amount inclusively.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
