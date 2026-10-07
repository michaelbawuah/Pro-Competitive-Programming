# Achieve the Goal

[Original problem](https://atcoder.jp/contests/abc151/tasks/abc151_b) · [C++ solution](../../solutions/atcoder/implementation/abc151_b_achieve_the_goal.cpp)

## Try first

An average of at least M requires total score N*M.

## Reasoning

An average of at least M requires total score N*M. Subtract known scores, clamp the needed score to zero, and reject it if it exceeds K.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
