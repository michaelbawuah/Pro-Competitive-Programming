# Count Down

[Original problem](https://atcoder.jp/contests/abc281/tasks/abc281_a) · [C++ solution](../../solutions/atcoder/implementation/abc281_a_count_down.cpp)

## Try first

Start at N and decrement through zero, printing each value before moving to the next smaller one.

## Reasoning

Start at N and decrement through zero, printing each value before moving to the next smaller one.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
