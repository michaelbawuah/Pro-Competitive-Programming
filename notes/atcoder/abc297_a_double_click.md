# Double Click

[Original problem](https://atcoder.jp/contests/abc297/tasks/abc297_a) · [C++ solution](../../solutions/atcoder/implementation/abc297_a_double_click.cpp)

## Try first

Only consecutive click times can trigger the specified event.

## Reasoning

Only consecutive click times can trigger the specified event. Scan adjacent gaps and save the later time of the first gap at most D, without overwriting it later.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
