# Visibility

[Original problem](https://atcoder.jp/contests/abc197/tasks/abc197_b) · [C++ solution](../../solutions/atcoder/implementation/abc197_b_visibility.cpp)

## Try first

Count the starting square once, then scan outward in each cardinal direction until an obstacle or grid boundary.

## Reasoning

Count the starting square once, then scan outward in each cardinal direction until an obstacle or grid boundary. Those four rays contain all other visible squares.

## Cost

- Time: **O(H W)**.
- Extra space: **O(H W)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
