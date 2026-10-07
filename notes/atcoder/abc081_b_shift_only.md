# Shift only

[Original problem](https://atcoder.jp/contests/abc081/tasks/abc081_b) · [C++ solution](../../solutions/atcoder/implementation/abc081_b_shift_only.cpp)

## Try first

A simultaneous division requires every number to remain even.

## Reasoning

A simultaneous division requires every number to remain even. The smallest exponent of two among the inputs is the first exhausted resource.

## Cost

- Time: **O(n log A)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
