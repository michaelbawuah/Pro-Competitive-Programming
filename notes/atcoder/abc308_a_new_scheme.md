# New Scheme

[Original problem](https://atcoder.jp/contests/abc308/tasks/abc308_a) · [C++ solution](../../solutions/atcoder/implementation/abc308_a_new_scheme.cpp)

## Try first

Check every value against the permitted range and divisibility requirement, and compare it with the previous value to enforce nondecreasing order.

## Reasoning

Check every value against the permitted range and divisibility requirement, and compare it with the previous value to enforce nondecreasing order.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
