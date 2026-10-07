# AtCoder Quiz 2

[Original problem](https://atcoder.jp/contests/abc219/tasks/abc219_a) · [C++ solution](../../solutions/atcoder/implementation/abc219_a_atcoder_quiz_2.cpp)

## Try first

Choose the first rank threshold strictly above the score and subtract the score.

## Reasoning

Choose the first rank threshold strictly above the score and subtract the score. Scores at least ninety have no higher rank.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
