# Modulo Number

[Original problem](https://atcoder.jp/contests/abc266/tasks/abc266_b) · [C++ solution](../../solutions/atcoder/implementation/abc266_b_modulo_number.cpp)

## Try first

C++ remainder can be negative.

## Reasoning

C++ remainder can be negative. Reducing, adding one modulus, and reducing again yields the unique representative in the required nonnegative range.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
