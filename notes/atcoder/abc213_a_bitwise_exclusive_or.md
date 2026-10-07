# Bitwise Exclusive Or

[Original problem](https://atcoder.jp/contests/abc213/tasks/abc213_a) · [C++ solution](../../solutions/atcoder/implementation/abc213_a_bitwise_exclusive_or.cpp)

## Try first

XOR with A on both sides cancels A because A xor A is zero, leaving C=A xor B..

## Reasoning

XOR with A on both sides cancels A because A xor A is zero, leaving C=A xor B.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
