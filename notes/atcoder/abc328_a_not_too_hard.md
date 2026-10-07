# Not Too Hard

[Original problem](https://atcoder.jp/contests/abc328/tasks/abc328_a) · [C++ solution](../../solutions/atcoder/implementation/abc328_a_not_too_hard.cpp)

## Try first

Include every problem whose score is at most X and add its score to the running total.

## Reasoning

Include every problem whose score is at most X and add its score to the running total. The threshold is inclusive.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
