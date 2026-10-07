# Rectangle Detection

[Original problem](https://atcoder.jp/contests/abc269/tasks/abc269_b) · [C++ solution](../../solutions/atcoder/implementation/abc269_b_rectangle_detection.cpp)

## Try first

The filled rectangle is nonempty.

## Reasoning

The filled rectangle is nonempty. Its smallest and largest occupied row and column are exactly its four defining boundaries.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
