# Arithmetic Progression

[Original problem](https://atcoder.jp/contests/abc340/tasks/abc340_a) · [C++ solution](../../solutions/atcoder/implementation/abc340_a_arithmetic_progression.cpp)

## Try first

Begin at the first term and repeatedly add the positive common difference.

## Reasoning

Begin at the first term and repeatedly add the positive common difference. The existence guarantee ensures that the final emitted term is exactly B.

## Cost

- Time: **O((B-A)/D+1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
