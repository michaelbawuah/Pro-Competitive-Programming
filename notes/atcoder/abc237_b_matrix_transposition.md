# Matrix Transposition

[Original problem](https://atcoder.jp/contests/abc237/tasks/abc237_b) · [C++ solution](../../solutions/atcoder/implementation/abc237_b_matrix_transposition.cpp)

## Try first

Transposition exchanges row and column indices.

## Reasoning

Transposition exchanges row and column indices. Output each original column as a new row, preserving its top-to-bottom order.

## Cost

- Time: **O(HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
