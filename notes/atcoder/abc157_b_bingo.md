# Bingo

[Original problem](https://atcoder.jp/contests/abc157/tasks/abc157_b) · [C++ solution](../../solutions/atcoder/implementation/abc157_b_bingo.cpp)

## Try first

Mark every called value, then test the three rows, three columns, and two diagonals.

## Reasoning

Mark every called value, then test the three rows, three columns, and two diagonals. Those eight lines are all possible bingos.

## Cost

- Time: **O(N)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
