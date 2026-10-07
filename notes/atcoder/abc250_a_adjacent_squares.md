# Adjacent Squares

[Original problem](https://atcoder.jp/contests/abc250/tasks/abc250_a) · [C++ solution](../../solutions/atcoder/implementation/abc250_a_adjacent_squares.cpp)

## Try first

Each of the four directions contributes one adjacent square exactly when moving that way remains inside the grid..

## Reasoning

Each of the four directions contributes one adjacent square exactly when moving that way remains inside the grid.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
