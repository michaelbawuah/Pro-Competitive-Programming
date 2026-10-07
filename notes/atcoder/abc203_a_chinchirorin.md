# Chinchirorin

[Original problem](https://atcoder.jp/contests/abc203/tasks/abc203_a) · [C++ solution](../../solutions/atcoder/implementation/abc203_a_chinchirorin.cpp)

## Try first

Check each possible equal pair and return the remaining value.

## Reasoning

Check each possible equal pair and return the remaining value. If no pair is equal, return zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
