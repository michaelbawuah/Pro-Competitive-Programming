# Number Box

[Original problem](https://atcoder.jp/contests/abc258/tasks/abc258_b) · [C++ solution](../../solutions/atcoder/implementation/abc258_b_number_box.cpp)

## Try first

A path is determined by its starting cell and one of eight directions.

## Reasoning

A path is determined by its starting cell and one of eight directions. Enumerate them all, wrap both coordinates modulo N, and accumulate each N-digit number in a 64-bit integer.

## Cost

- Time: **O(n^3)**.
- Extra space: **O(n^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
