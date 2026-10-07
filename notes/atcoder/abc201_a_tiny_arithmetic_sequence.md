# Tiny Arithmetic Sequence

[Original problem](https://atcoder.jp/contests/abc201/tasks/abc201_a) · [C++ solution](../../solutions/atcoder/implementation/abc201_a_tiny_arithmetic_sequence.cpp)

## Try first

Any three-term arithmetic sequence is ordered monotonically or reversed.

## Reasoning

Any three-term arithmetic sequence is ordered monotonically or reversed. Sort the values and test equality of its two adjacent differences.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
