# Leyland Number

[Original problem](https://atcoder.jp/contests/abc320/tasks/abc320_a) · [C++ solution](../../solutions/atcoder/implementation/abc320_a_leyland_number.cpp)

## Try first

Compute both small integer powers by repeated multiplication, then add their exact values.

## Reasoning

Compute both small integer powers by repeated multiplication, then add their exact values. This avoids rounding from floating-point power functions.

## Cost

- Time: **O(A+B)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
