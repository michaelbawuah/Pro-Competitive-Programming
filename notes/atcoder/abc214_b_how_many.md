# How many?

[Original problem](https://atcoder.jp/contests/abc214/tasks/abc214_b) · [C++ solution](../../solutions/atcoder/implementation/abc214_b_how_many.cpp)

## Try first

The sum bound limits every coordinate to S.

## Reasoning

The sum bound limits every coordinate to S. Enumerate all nonnegative triples respecting the sum and count those also respecting the product.

## Cost

- Time: **O(S^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
