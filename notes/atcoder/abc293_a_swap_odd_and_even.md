# Swap Odd and Even

[Original problem](https://atcoder.jp/contests/abc293/tasks/abc293_a) · [C++ solution](../../solutions/atcoder/implementation/abc293_a_swap_odd_and_even.cpp)

## Try first

Partition the even-length string into adjacent two-character blocks.

## Reasoning

Partition the even-length string into adjacent two-character blocks. Swap inside each block; the blocks are disjoint, so every character moves exactly once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
