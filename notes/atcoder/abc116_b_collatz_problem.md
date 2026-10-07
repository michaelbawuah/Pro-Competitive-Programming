# Collatz Problem

[Original problem](https://atcoder.jp/contests/abc116/tasks/abc116_b) · [C++ solution](../../solutions/atcoder/implementation/abc116_b_collatz_problem.cpp)

## Try first

Record each value before generating the next.

## Reasoning

Record each value before generating the next. The first failed insertion is the first repeated term, and its one-based index is the required answer.

## Cost

- Time: **O(m log m)**.
- Extra space: **O(m)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
