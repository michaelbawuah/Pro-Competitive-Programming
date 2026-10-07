# Rounding

[Original problem](https://atcoder.jp/contests/abc130/tasks/abc130_a) · [C++ solution](../../solutions/atcoder/implementation/abc130_a_rounding.cpp)

## Try first

Compare using the strict less-than relation; equality follows the ten-output branch..

## Reasoning

Compare using the strict less-than relation; equality follows the ten-output branch.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
