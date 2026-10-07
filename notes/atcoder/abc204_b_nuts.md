# Nuts

[Original problem](https://atcoder.jp/contests/abc204/tasks/abc204_b) · [C++ solution](../../solutions/atcoder/implementation/abc204_b_nuts.cpp)

## Try first

Each tree contributes only its excess over ten nuts; nonpositive excess contributes zero.

## Reasoning

Each tree contributes only its excess over ten nuts; nonpositive excess contributes zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
