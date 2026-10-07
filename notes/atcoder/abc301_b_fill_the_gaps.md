# Fill the Gaps

[Original problem](https://atcoder.jp/contests/abc301/tasks/abc301_b) · [C++ solution](../../solutions/atcoder/implementation/abc301_b_fill_the_gaps.cpp)

## Try first

For each original adjacent pair, walk in unit steps toward the second value and emit each reached value.

## Reasoning

For each original adjacent pair, walk in unit steps toward the second value and emit each reached value. This inserts exactly the missing intermediate values without repeating the shared endpoint.

## Cost

- Time: **O(output length)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
