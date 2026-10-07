# 326-like Numbers

[Original problem](https://atcoder.jp/contests/abc326/tasks/abc326_b) · [C++ solution](../../solutions/atcoder/implementation/abc326_b_326_like_numbers.cpp)

## Try first

Scan candidate integers upward and test the hundreds-times-tens digit relation.

## Reasoning

Scan candidate integers upward and test the hundreds-times-tens digit relation. The first match is the smallest valid integer at least N.

## Cost

- Time: **O(1000)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
