# Divisible

[Original problem](https://atcoder.jp/contests/abc347/tasks/abc347_a) · [C++ solution](../../solutions/atcoder/implementation/abc347_a_divisible.cpp)

## Try first

Filter the already increasing sequence for divisibility by K and divide qualifying values by the same positive K.

## Reasoning

Filter the already increasing sequence for divisibility by K and divide qualifying values by the same positive K. Their increasing order is preserved.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
