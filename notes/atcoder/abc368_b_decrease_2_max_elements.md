# Decrease 2 max elements

[Original problem](https://atcoder.jp/contests/abc368/tasks/abc368_b) · [C++ solution](../../solutions/atcoder/implementation/abc368_b_decrease_2_max_elements.cpp)

## Try first

A max-heap provides the same largest two values as sorting on every iteration.

## Reasoning

A max-heap provides the same largest two values as sorting on every iteration. If the second largest is zero, at most one positive value remains; otherwise decrement both, reinsert them, and count the operation.

## Cost

- Time: **O((N+sum A) log N)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
