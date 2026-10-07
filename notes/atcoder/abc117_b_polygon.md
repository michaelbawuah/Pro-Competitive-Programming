# Polygon

[Original problem](https://atcoder.jp/contests/abc117/tasks/abc117_b) · [C++ solution](../../solutions/atcoder/implementation/abc117_b_polygon.cpp)

## Try first

Apply the polygon inequality: the longest side must be strictly shorter than the sum of all other sides.

## Reasoning

Apply the polygon inequality: the longest side must be strictly shorter than the sum of all other sides. Equality would give a degenerate polygon.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
