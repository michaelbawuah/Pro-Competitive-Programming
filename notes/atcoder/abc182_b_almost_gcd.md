# Almost GCD

[Original problem](https://atcoder.jp/contests/abc182/tasks/abc182_b) · [C++ solution](../../solutions/atcoder/implementation/abc182_b_almost_gcd.cpp)

## Try first

Any divisor exceeding the maximum input has zero frequency.

## Reasoning

Any divisor exceeding the maximum input has zero frequency. Enumerate all smaller candidates and keep one with the largest divisibility count.

## Cost

- Time: **O(1000 n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
