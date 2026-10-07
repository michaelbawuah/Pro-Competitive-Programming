# To Be Saikyo

[Original problem](https://atcoder.jp/contests/abc313/tasks/abc313_a) · [C++ solution](../../solutions/atcoder/implementation/abc313_a_to_be_saikyo.cpp)

## Try first

Each opponent requires at least their score minus the first score plus one additional point.

## Reasoning

Each opponent requires at least their score minus the first score plus one additional point. Take the maximum of these deficits and zero; with no opponents, zero remains sufficient.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
