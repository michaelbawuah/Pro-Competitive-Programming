# Tetrahedral Number

[Original problem](https://atcoder.jp/contests/abc335/tasks/abc335_b) · [C++ solution](../../solutions/atcoder/implementation/abc335_b_tetrahedral_number.cpp)

## Try first

Nested increasing loops over x, then y, then z produce lexicographic order.

## Reasoning

Nested increasing loops over x, then y, then z produce lexicographic order. Limit each inner coordinate by the remaining sum budget so every emitted triple is valid and every valid triple appears once.

## Cost

- Time: **O((N+1)^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
