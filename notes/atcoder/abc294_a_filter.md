# Filter

[Original problem](https://atcoder.jp/contests/abc294/tasks/abc294_a) · [C++ solution](../../solutions/atcoder/implementation/abc294_a_filter.cpp)

## Try first

Scan in original order and output exactly the values divisible by two.

## Reasoning

Scan in original order and output exactly the values divisible by two. Streaming the filter preserves relative order and duplicates.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
