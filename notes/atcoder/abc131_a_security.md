# Security

[Original problem](https://atcoder.jp/contests/abc131/tasks/abc131_a) · [C++ solution](../../solutions/atcoder/implementation/abc131_a_security.cpp)

## Try first

The code is bad exactly when one of its three adjacent digit pairs is equal.

## Reasoning

The code is bad exactly when one of its three adjacent digit pairs is equal. Keeping the input as a string preserves leading zeros.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
