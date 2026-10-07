# 0 or 1 Swap

[Original problem](https://atcoder.jp/contests/abc135/tasks/abc135_b) · [C++ solution](../../solutions/atcoder/implementation/abc135_b_0_or_1_swap.cpp)

## Try first

A single swap changes at most two positions.

## Reasoning

A single swap changes at most two positions. In a permutation, exactly two misplaced positions must contain one another values, so swapping them sorts it; zero mismatches needs no operation.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
