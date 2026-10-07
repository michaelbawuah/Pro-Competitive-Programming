# Penalty Kick

[Original problem](https://atcoder.jp/contests/abc348/tasks/abc348_a) · [C++ solution](../../solutions/atcoder/implementation/abc348_a_penalty_kick.cpp)

## Try first

Use one-based kick numbers and emit failure exactly at multiples of three, success at all other positions.

## Reasoning

Use one-based kick numbers and emit failure exactly at multiples of three, success at all other positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
