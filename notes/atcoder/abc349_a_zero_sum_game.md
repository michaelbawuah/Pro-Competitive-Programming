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

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
