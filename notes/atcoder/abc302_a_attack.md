# Attack

[Original problem](https://atcoder.jp/contests/abc302/tasks/abc302_a) · [C++ solution](../../solutions/atcoder/implementation/abc302_a_attack.cpp)

## Try first

Each attack removes B stamina.

## Reasoning

Each attack removes B stamina. Divide A by B and add one when a positive remainder needs an additional attack; this ceiling formula avoids adding large operands.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
