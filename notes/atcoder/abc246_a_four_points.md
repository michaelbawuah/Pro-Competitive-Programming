# Four Points

[Original problem](https://atcoder.jp/contests/abc246/tasks/abc246_a) · [C++ solution](../../solutions/atcoder/implementation/abc246_a_four_points.cpp)

## Try first

Each of the rectangle two x-coordinates and two y-coordinates occurs twice.

## Reasoning

Each of the rectangle two x-coordinates and two y-coordinates occurs twice. In each coordinate independently, the value appearing once among the three supplied vertices belongs to the missing vertex.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
