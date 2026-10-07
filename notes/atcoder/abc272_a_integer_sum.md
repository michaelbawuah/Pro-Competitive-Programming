# Integer Sum

[Original problem](https://atcoder.jp/contests/abc272/tasks/abc272_a) · [C++ solution](../../solutions/atcoder/implementation/abc272_a_integer_sum.cpp)

## Try first

Maintain the sum of the values already read.

## Reasoning

Maintain the sum of the values already read. Adding every input once yields the requested total.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
