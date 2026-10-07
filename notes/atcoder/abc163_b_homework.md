# Homework

[Original problem](https://atcoder.jp/contests/abc163/tasks/abc163_b) · [C++ solution](../../solutions/atcoder/implementation/abc163_b_homework.cpp)

## Try first

All assignment durations occupy disjoint days.

## Reasoning

All assignment durations occupy disjoint days. Subtract their sum from the vacation length and reject a negative remainder.

## Cost

- Time: **O(M)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
