# Repression

[Original problem](https://atcoder.jp/contests/abc207/tasks/abc207_a) · [C++ solution](../../solutions/atcoder/implementation/abc207_a_repression.cpp)

## Try first

Picking the two largest values is equivalent to subtracting the minimum from the sum of all three..

## Reasoning

Picking the two largest values is equivalent to subtracting the minimum from the sum of all three.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
