# Buildings

[Original problem](https://atcoder.jp/contests/abc353/tasks/abc353_a) · [C++ solution](../../solutions/atcoder/implementation/abc353_a_buildings.cpp)

## Try first

Compare every later building with the fixed first height.

## Reasoning

Compare every later building with the fixed first height. Store only the first strict improvement, retaining minus one when no such building exists.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
