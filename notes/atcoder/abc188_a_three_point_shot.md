# Three-Point Shot

[Original problem](https://atcoder.jp/contests/abc188/tasks/abc188_a) · [C++ solution](../../solutions/atcoder/implementation/abc188_a_three_point_shot.cpp)

## Try first

A three-point goal wins only when the current deficit is strictly below three.

## Reasoning

A three-point goal wins only when the current deficit is strictly below three.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
