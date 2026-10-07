# White Cells

[Original problem](https://atcoder.jp/contests/abc121/tasks/abc121_a) · [C++ solution](../../solutions/atcoder/implementation/abc121_a_white_cells.cpp)

## Try first

A white cell must lie in both an unpainted row and an unpainted column.

## Reasoning

A white cell must lie in both an unpainted row and an unpainted column. Multiply the counts of those two choices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
