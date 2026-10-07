# Enlarged Checker Board

[Original problem](https://atcoder.jp/contests/abc250/tasks/abc250_b) · [C++ solution](../../solutions/atcoder/implementation/abc250_b_enlarged_checker_board.cpp)

## Try first

Integer division maps each cell to its tile row and column.

## Reasoning

Integer division maps each cell to its tile row and column. The parity of their sum gives the alternating tile color with a white top-left tile.

## Cost

- Time: **O(N^2 AB)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
