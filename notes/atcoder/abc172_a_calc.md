# Calc

[Original problem](https://atcoder.jp/contests/abc172/tasks/abc172_a) · [C++ solution](../../solutions/atcoder/implementation/abc172_a_calc.cpp)

## Try first

Evaluate each of the three powers and add them; the small input bound keeps the result integral and exact..

## Reasoning

Evaluate each of the three powers and add them; the small input bound keeps the result integral and exact.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
