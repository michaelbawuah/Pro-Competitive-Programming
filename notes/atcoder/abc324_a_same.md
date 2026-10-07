# Same

[Original problem](https://atcoder.jp/contests/abc324/tasks/abc324_a) · [C++ solution](../../solutions/atcoder/implementation/abc324_a_same.cpp)

## Try first

All values are equal exactly when each value equals the first one.

## Reasoning

All values are equal exactly when each value equals the first one. Use the first input as a fixed reference.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
