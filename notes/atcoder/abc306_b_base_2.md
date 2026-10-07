# Base 2

[Original problem](https://atcoder.jp/contests/abc306/tasks/abc306_b) · [C++ solution](../../solutions/atcoder/implementation/abc306_b_base_2.cpp)

## Try first

Each input bit controls one distinct power of two.

## Reasoning

Each input bit controls one distinct power of two. Use an unsigned 64-bit value for both the result and shifted one so bit 63 and the maximum unsigned value are representable.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
