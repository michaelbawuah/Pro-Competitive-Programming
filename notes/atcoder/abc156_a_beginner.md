# Beginner

[Original problem](https://atcoder.jp/contests/abc156/tasks/abc156_a) · [C++ solution](../../solutions/atcoder/implementation/abc156_a_beginner.cpp)

## Try first

Undo the displayed-rating deduction for fewer than ten contests; the deduction is zero afterward..

## Reasoning

Undo the displayed-rating deduction for fewer than ten contests; the deduction is zero afterward.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
