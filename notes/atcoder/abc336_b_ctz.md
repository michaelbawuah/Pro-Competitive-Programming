# CTZ

[Original problem](https://atcoder.jp/contests/abc336/tasks/abc336_b) · [C++ solution](../../solutions/atcoder/implementation/abc336_b_ctz.cpp)

## Try first

A trailing binary zero corresponds to a factor of two.

## Reasoning

A trailing binary zero corresponds to a factor of two. Repeatedly divide by two until the number becomes odd, counting the removed factors.

## Cost

- Time: **O(log N)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
