# Brick

[Original problem](https://atcoder.jp/contests/abc186/tasks/abc186_a) · [C++ solution](../../solutions/atcoder/implementation/abc186_a_brick.cpp)

## Try first

Whole bricks fit according to floor capacity divided by individual weight; any additional brick would exceed capacity.

## Reasoning

Whole bricks fit according to floor capacity divided by individual weight; any additional brick would exceed capacity.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
