# *3 or /2

[Original problem](https://atcoder.jp/contests/abc100/tasks/abc100_c) · [C++ solution](../../solutions/atcoder/implementation/abc100_c_3_or_2.cpp)

## Try first

Multiplication by three never adds a factor of two, and each operation consumes at least one such factor.

## Reasoning

Multiplication by three never adds a factor of two, and each operation consumes at least one such factor. Dividing only one even element each round achieves the total number of factors.

## Cost

- Time: **O(n log A)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
