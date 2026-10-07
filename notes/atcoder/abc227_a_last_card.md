# Last Card

[Original problem](https://atcoder.jp/contests/abc227/tasks/abc227_a) · [C++ solution](../../solutions/atcoder/implementation/abc227_a_last_card.cpp)

## Try first

Convert the starting person to zero-based position, advance K-1 places, then wrap modulo N and restore one-based numbering..

## Reasoning

Convert the starting person to zero-based position, advance K-1 places, then wrap modulo N and restore one-based numbering.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
