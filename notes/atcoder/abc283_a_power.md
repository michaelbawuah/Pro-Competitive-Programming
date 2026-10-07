# Power

[Original problem](https://atcoder.jp/contests/abc283/tasks/abc283_a) · [C++ solution](../../solutions/atcoder/implementation/abc283_a_power.cpp)

## Try first

Multiply by A exactly B times starting from one.

## Reasoning

Multiply by A exactly B times starting from one. Integer arithmetic computes the small bounded power exactly.

## Cost

- Time: **O(B)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
