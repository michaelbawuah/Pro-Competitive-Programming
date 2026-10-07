# Health M Death

[Original problem](https://atcoder.jp/contests/abc195/tasks/abc195_a) · [C++ solution](../../solutions/atcoder/implementation/abc195_a_health_m_death.cpp)

## Try first

The magic applies exactly to multiples of M, detected by a zero remainder..

## Reasoning

The magic applies exactly to multiples of M, detected by a zero remainder.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
