# ABC333

[Original problem](https://atcoder.jp/contests/abc109/tasks/abc109_a) · [C++ solution](../../solutions/atcoder/implementation/abc109_a_abc333.cpp)

## Try first

A product is odd only if every factor is odd.

## Reasoning

A product is odd only if every factor is odd. When A and B are odd, choosing C=1 works.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
