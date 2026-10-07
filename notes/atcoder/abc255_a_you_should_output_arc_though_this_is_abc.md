# You should output ARC, though this is ABC.

[Original problem](https://atcoder.jp/contests/abc255/tasks/abc255_a) · [C++ solution](../../solutions/atcoder/implementation/abc255_a_you_should_output_arc_though_this_is_abc.cpp)

## Try first

Read the matrix in row-major order, then convert the requested one-based row and column to zero-based array indices..

## Reasoning

Read the matrix in row-major order, then convert the requested one-based row and column to zero-based array indices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
