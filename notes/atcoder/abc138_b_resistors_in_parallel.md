# Resistors in Parallel

[Original problem](https://atcoder.jp/contests/abc138/tasks/abc138_b) · [C++ solution](../../solutions/atcoder/implementation/abc138_b_resistors_in_parallel.cpp)

## Try first

Accumulate reciprocals in floating point and invert their positive sum.

## Reasoning

Accumulate reciprocals in floating point and invert their positive sum. Integer division would incorrectly turn most reciprocals into zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
