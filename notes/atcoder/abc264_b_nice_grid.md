# Nice Grid

[Original problem](https://atcoder.jp/contests/abc264/tasks/abc264_b) · [C++ solution](../../solutions/atcoder/implementation/abc264_b_nice_grid.cpp)

## Try first

The grid has alternating square rings beginning with a black outer border.

## Reasoning

The grid has alternating square rings beginning with a black outer border. The minimum distance to any edge identifies the ring, whose parity determines its color.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
