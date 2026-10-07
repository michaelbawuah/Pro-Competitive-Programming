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

Parenthesize conditional expressions sent to an output stream so the stream insertion operator does not change their grouping. Use separate variables for quantities with different roles.

## Watch for

Check whether the condition is strict or inclusive, particularly at the smallest and largest permitted values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
