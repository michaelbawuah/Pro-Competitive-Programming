# Biscuit Generator

[Original problem](https://atcoder.jp/contests/abc125/tasks/abc125_a) · [C++ solution](../../solutions/atcoder/implementation/abc125_a_biscuit_generator.cpp)

## Try first

Every completed multiple of A by integer time T contributes B biscuits.

## Reasoning

Every completed multiple of A by integer time T contributes B biscuits. The extra half-second does not include another integer production time.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
