# Nice Grid

[Original problem](https://atcoder.jp/contests/abc264/tasks/abc264_b) · [C++ solution](../../solutions/atcoder/implementation/abc264_b_nice_grid.cpp)

## Try first

The grid has alternating square rings beginning with a black outer border.

## Reasoning

The grid has alternating square rings beginning with a black outer border. The minimum distance to any edge identifies the ring, whose parity determines its color.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
