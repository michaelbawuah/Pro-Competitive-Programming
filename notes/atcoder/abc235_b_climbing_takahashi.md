# Climbing Takahashi

[Original problem](https://atcoder.jp/contests/abc235/tasks/abc235_b) · [C++ solution](../../solutions/atcoder/implementation/abc235_b_climbing_takahashi.cpp)

## Try first

Keep climbing only while each next height is strictly greater.

## Reasoning

Keep climbing only while each next height is strictly greater. Once a non-increase occurs, movement stops permanently even if later mountains are taller.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
