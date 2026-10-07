# Vertical Reading

[Original problem](https://atcoder.jp/contests/abc360/tasks/abc360_b) · [C++ solution](../../solutions/atcoder/implementation/abc360_b_vertical_reading.cpp)

## Try first

For each allowed width and column, vertical reading takes positions column, column+width, and so on.

## Reasoning

For each allowed width and column, vertical reading takes positions column, column+width, and so on. Construct that candidate and compare it with T, including the final short row only when the column exists.

## Cost

- Time: **O(|S|^2)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
