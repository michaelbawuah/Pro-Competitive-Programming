# Tetrahedral Number

[Original problem](https://atcoder.jp/contests/abc335/tasks/abc335_b) · [C++ solution](../../solutions/atcoder/implementation/abc335_b_tetrahedral_number.cpp)

## Try first

Nested increasing loops over x, then y, then z produce lexicographic order.

## Reasoning

Nested increasing loops over x, then y, then z produce lexicographic order. Limit each inner coordinate by the remaining sum budget so every emitted triple is valid and every valid triple appears once.

## Cost

- Time: **O((N+1)^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
