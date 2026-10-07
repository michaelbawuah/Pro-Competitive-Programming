# World Cup

[Original problem](https://atcoder.jp/contests/abc262/tasks/abc262_a) · [C++ solution](../../solutions/atcoder/implementation/abc262_a_world_cup.cpp)

## Try first

Choose the smallest nonnegative offset that makes the year congruent to two modulo four.

## Reasoning

Choose the smallest nonnegative offset that makes the year congruent to two modulo four. This includes the current year when it already qualifies.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
