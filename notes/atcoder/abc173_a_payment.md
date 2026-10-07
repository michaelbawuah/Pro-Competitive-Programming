# Payment

[Original problem](https://atcoder.jp/contests/abc173/tasks/abc173_a) · [C++ solution](../../solutions/atcoder/implementation/abc173_a_payment.cpp)

## Try first

The change is the distance to the next multiple of one thousand.

## Reasoning

The change is the distance to the next multiple of one thousand. The outer remainder makes exact multiples return zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
