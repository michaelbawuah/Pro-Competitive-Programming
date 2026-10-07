# Scoreboard

[Original problem](https://atcoder.jp/contests/abc337/tasks/abc337_a) · [C++ solution](../../solutions/atcoder/implementation/abc337_a_scoreboard.cpp)

## Try first

Sum each team score over all matches independently.

## Reasoning

Sum each team score over all matches independently. Compare the two totals, allowing an exact tie.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
