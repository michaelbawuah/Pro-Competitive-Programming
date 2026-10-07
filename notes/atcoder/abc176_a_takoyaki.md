# Takoyaki

[Original problem](https://atcoder.jp/contests/abc176/tasks/abc176_a) · [C++ solution](../../solutions/atcoder/implementation/abc176_a_takoyaki.cpp)

## Try first

Ceiling-divide demand by batch capacity, then multiply the batch count by its fixed cooking duration..

## Reasoning

Ceiling-divide demand by batch capacity, then multiply the batch count by its fixed cooking duration.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
