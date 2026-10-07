# Maximize the Formula

[Original problem](https://atcoder.jp/contests/abc110/tasks/abc110_a) · [C++ solution](../../solutions/atcoder/implementation/abc110_a_maximize_the_formula.cpp)

## Try first

Exactly one digit receives place value ten.

## Reasoning

Exactly one digit receives place value ten. Assign that place to the largest digit; the other two contribute once each.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
