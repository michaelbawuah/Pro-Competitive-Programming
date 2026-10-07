# Ordinary Number

[Original problem](https://atcoder.jp/contests/abc132/tasks/abc132_b) · [C++ solution](../../solutions/atcoder/implementation/abc132_b_ordinary_number.cpp)

## Try first

With distinct permutation values, the center is the median precisely when the three consecutive values are strictly increasing or strictly decreasing..

## Reasoning

With distinct permutation values, the center is the median precisely when the three consecutive values are strictly increasing or strictly decreasing.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
