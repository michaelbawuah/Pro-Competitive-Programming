# Find Takahashi

[Original problem](https://atcoder.jp/contests/abc275/tasks/abc275_a) · [C++ solution](../../solutions/atcoder/implementation/abc275_a_find_takahashi.cpp)

## Try first

Maintain the highest height seen together with its one-based bridge index.

## Reasoning

Maintain the highest height seen together with its one-based bridge index. Updating both when a larger height arrives preserves the maximum invariant.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
