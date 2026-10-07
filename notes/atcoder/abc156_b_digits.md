# Digits

[Original problem](https://atcoder.jp/contests/abc156/tasks/abc156_b) · [C++ solution](../../solutions/atcoder/implementation/abc156_b_digits.cpp)

## Try first

Each integer division by the base removes one least-significant digit.

## Reasoning

Each integer division by the base removes one least-significant digit. Count divisions until the positive number is exhausted.

## Cost

- Time: **O(log_K N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
