# Programming Education

[Original problem](https://atcoder.jp/contests/abc112/tasks/abc112_a) · [C++ solution](../../solutions/atcoder/implementation/abc112_a_programming_education.cpp)

## Try first

Read the age first because it determines whether two further input values exist.

## Reasoning

Read the age first because it determines whether two further input values exist. Then execute the corresponding output rule.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
