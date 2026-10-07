# ReLU

[Original problem](https://atcoder.jp/contests/abc183/tasks/abc183_a) · [C++ solution](../../solutions/atcoder/implementation/abc183_a_relu.cpp)

## Try first

ReLU preserves positive values and replaces negative values with zero.

## Reasoning

ReLU preserves positive values and replaces negative values with zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
