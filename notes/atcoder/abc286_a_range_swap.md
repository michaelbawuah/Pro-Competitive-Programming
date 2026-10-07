# Range Swap

[Original problem](https://atcoder.jp/contests/abc286/tasks/abc286_a) · [C++ solution](../../solutions/atcoder/implementation/abc286_a_range_swap.cpp)

## Try first

The two disjoint ranges have equal length.

## Reasoning

The two disjoint ranges have equal length. Swap corresponding elements at each offset, leaving every element outside the ranges unchanged.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
