# Zero Sum Game

[Original problem](https://atcoder.jp/contests/abc349/tasks/abc349_a) · [C++ solution](../../solutions/atcoder/implementation/abc349_a_zero_sum_game.cpp)

## Try first

Each game adds one point and subtracts one, so the total score stays zero.

## Reasoning

Each game adds one point and subtracts one, so the total score stays zero. The missing final score must negate the sum of all supplied scores.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
