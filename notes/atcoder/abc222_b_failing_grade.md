# Failing Grade

[Original problem](https://atcoder.jp/contests/abc222/tasks/abc222_b) · [C++ solution](../../solutions/atcoder/implementation/abc222_b_failing_grade.cpp)

## Try first

Failing means strictly below P; count those scores and preserve passing scores equal to the threshold.

## Reasoning

Failing means strictly below P; count those scores and preserve passing scores equal to the threshold.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
