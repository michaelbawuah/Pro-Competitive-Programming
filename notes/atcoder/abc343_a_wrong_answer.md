# Wrong Answer

[Original problem](https://atcoder.jp/contests/abc343/tasks/abc343_a) · [C++ solution](../../solutions/atcoder/implementation/abc343_a_wrong_answer.cpp)

## Try first

The sum is a digit from zero through nine.

## Reasoning

The sum is a digit from zero through nine. Adding one modulo ten produces another valid digit that always differs from the sum.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
