# Inverse Prefix Sum

[Original problem](https://atcoder.jp/contests/abc280/tasks/abc280_b) · [C++ solution](../../solutions/atcoder/implementation/abc280_b_inverse_prefix_sum.cpp)

## Try first

Subtract consecutive prefix sums to isolate each original element.

## Reasoning

Subtract consecutive prefix sums to isolate each original element. Treat the prefix before the first element as zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
