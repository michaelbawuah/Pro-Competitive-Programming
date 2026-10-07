# Insert

[Original problem](https://atcoder.jp/contests/abc361/tasks/abc361_a) · [C++ solution](../../solutions/atcoder/implementation/abc361_a_insert.cpp)

## Try first

Copy each original value in order and emit X immediately after the K-th value.

## Reasoning

Copy each original value in order and emit X immediately after the K-th value. This inserts one new element without changing any existing order.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
