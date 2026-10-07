# Subsegment Reverse

[Original problem](https://atcoder.jp/contests/abc356/tasks/abc356_a) · [C++ solution](../../solutions/atcoder/implementation/abc356_a_subsegment_reverse.cpp)

## Try first

Positions outside the reversed interval retain their values.

## Reasoning

Positions outside the reversed interval retain their values. Within it, position i receives the symmetric original value L+R-i.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
