# Roller Coaster

[Original problem](https://atcoder.jp/contests/abc142/tasks/abc142_b) · [C++ solution](../../solutions/atcoder/implementation/abc142_b_roller_coaster.cpp)

## Try first

The height threshold is inclusive, so count each height at least K..

## Reasoning

The height threshold is inclusive, so count each height at least K.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
