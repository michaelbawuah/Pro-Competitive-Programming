# Find Multiple

[Original problem](https://atcoder.jp/contests/abc220/tasks/abc220_a) · [C++ solution](../../solutions/atcoder/implementation/abc220_a_find_multiple.cpp)

## Try first

Round the lower endpoint up to the first multiple of C.

## Reasoning

Round the lower endpoint up to the first multiple of C. It witnesses existence if within the upper bound; otherwise no later multiple can fit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
