# Pawn on a Grid

[Original problem](https://atcoder.jp/contests/abc280/tasks/abc280_a) · [C++ solution](../../solutions/atcoder/implementation/abc280_a_pawn_on_a_grid.cpp)

## Try first

Each occupied cell is represented by one hash character.

## Reasoning

Each occupied cell is represented by one hash character. Count hashes in every row and sum the row totals.

## Cost

- Time: **O(HW)**.
- Extra space: **O(W)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
