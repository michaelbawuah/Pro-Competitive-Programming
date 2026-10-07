# Unification

[Original problem](https://atcoder.jp/contests/abc120/tasks/abc120_c) · [C++ solution](../../solutions/atcoder/implementation/abc120_c_unification.cpp)

## Try first

Each removal consumes one cube of each color.

## Reasoning

Each removal consumes one cube of each color. While both colors remain there is an adjacent color boundary, so removals can continue until the minority color is exhausted.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
