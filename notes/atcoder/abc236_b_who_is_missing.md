# Who is missing?

[Original problem](https://atcoder.jp/contests/abc236/tasks/abc236_b) · [C++ solution](../../solutions/atcoder/implementation/abc236_b_who_is_missing.cpp)

## Try first

Four equal copies XOR to zero.

## Reasoning

Four equal copies XOR to zero. The value with one missing copy occurs three times and XORs to itself, so XORing the entire input recovers it.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
