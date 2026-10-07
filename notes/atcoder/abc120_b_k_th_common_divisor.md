# K-th Common Divisor

[Original problem](https://atcoder.jp/contests/abc120/tasks/abc120_b) · [C++ solution](../../solutions/atcoder/implementation/abc120_b_k_th_common_divisor.cpp)

## Try first

Scan candidate divisors in decreasing order.

## Reasoning

Scan candidate divisors in decreasing order. Decrement the rank only for common divisors; the rank-zero candidate is the requested one.

## Cost

- Time: **O(min(A,B))**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
