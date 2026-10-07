# Generalized ABC

[Original problem](https://atcoder.jp/contests/abc282/tasks/abc282_a) · [C++ solution](../../solutions/atcoder/implementation/abc282_a_generalized_abc.cpp)

## Try first

Emit the first K consecutive uppercase letters by adding zero-based offsets to A.

## Reasoning

Emit the first K consecutive uppercase letters by adding zero-based offsets to A.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
