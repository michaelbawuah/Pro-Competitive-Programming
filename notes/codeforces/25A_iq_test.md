# IQ test

[Original problem](https://codeforces.com/problemset/problem/25/A) · [C++ solution](../../solutions/codeforces/counting/25A_iq_test.cpp)

## Try first

Count odd values to identify the minority parity.

## Reasoning

Count odd values to identify the minority parity. The statement guarantees exactly one exception, so scan for the sole value with that parity and report its one-based position.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
