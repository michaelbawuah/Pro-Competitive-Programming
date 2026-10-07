# 2^N

[Original problem](https://atcoder.jp/contests/abc256/tasks/abc256_a) · [C++ solution](../../solutions/atcoder/implementation/abc256_a_2_n.cpp)

## Try first

Shifting the integer one left by N positions produces 2^N.

## Reasoning

Shifting the integer one left by N positions produces 2^N. A 64-bit literal safely covers the full permitted exponent range.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
