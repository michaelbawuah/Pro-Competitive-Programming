# Discount Fare

[Original problem](https://atcoder.jp/contests/abc113/tasks/abc113_a) · [C++ solution](../../solutions/atcoder/implementation/abc113_a_discount_fare.cpp)

## Try first

Pay the train fare and half the bus fare.

## Reasoning

Pay the train fare and half the bus fare. The bus fare is guaranteed even, so integer division is exact.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
