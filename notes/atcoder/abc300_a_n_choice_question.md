# N-choice question

[Original problem](https://atcoder.jp/contests/abc300/tasks/abc300_a) · [C++ solution](../../solutions/atcoder/implementation/abc300_a_n_choice_question.cpp)

## Try first

Compute the required sum and scan the answer choices with one-based indices.

## Reasoning

Compute the required sum and scan the answer choices with one-based indices. The promised unique matching value identifies the correct choice.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
