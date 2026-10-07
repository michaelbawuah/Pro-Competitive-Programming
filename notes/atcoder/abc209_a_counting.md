# Counting

[Original problem](https://atcoder.jp/contests/abc209/tasks/abc209_a) · [C++ solution](../../solutions/atcoder/implementation/abc209_a_counting.cpp)

## Try first

Inclusive endpoints give B-A+1 integers when ordered, and zero when the interval is empty..

## Reasoning

Inclusive endpoints give B-A+1 integers when ordered, and zero when the interval is empty.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
