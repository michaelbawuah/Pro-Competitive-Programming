# Airplane

[Original problem](https://atcoder.jp/contests/abc129/tasks/abc129_a) · [C++ solution](../../solutions/atcoder/implementation/abc129_a_airplane.cpp)

## Try first

Any two different flight edges form a route through all three airports.

## Reasoning

Any two different flight edges form a route through all three airports. Exclude the largest edge to minimize the sum of the remaining two.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
