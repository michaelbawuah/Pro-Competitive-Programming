# Rotate

[Original problem](https://atcoder.jp/contests/abc309/tasks/abc309_b) · [C++ solution](../../solutions/atcoder/implementation/abc309_b_rotate.cpp)

## Try first

Copy the grid, then move the top edge right, right edge down, bottom edge left, and left edge up.

## Reasoning

Copy the grid, then move the top edge right, right edge down, bottom edge left, and left edge up. Reading exclusively from the original grid makes the border movement simultaneous and preserves the interior.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
