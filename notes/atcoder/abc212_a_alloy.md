# Alloy

[Original problem](https://atcoder.jp/contests/abc212/tasks/abc212_a) · [C++ solution](../../solutions/atcoder/implementation/abc212_a_alloy.cpp)

## Try first

At least one component is positive.

## Reasoning

At least one component is positive. A missing component gives pure metal; two positive components give an alloy.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
