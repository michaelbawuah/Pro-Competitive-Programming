# Pair

[Original problem](https://atcoder.jp/contests/abc108/tasks/abc108_a) · [C++ solution](../../solutions/atcoder/implementation/abc108_a_pair.cpp)

## Try first

Choose one of floor(K/2) even values and one of ceil(K/2) odd values independently..

## Reasoning

Choose one of floor(K/2) even values and one of ceil(K/2) odd values independently.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
