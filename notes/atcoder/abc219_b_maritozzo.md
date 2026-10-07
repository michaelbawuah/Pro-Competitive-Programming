# Maritozzo

[Original problem](https://atcoder.jp/contests/abc219/tasks/abc219_b) · [C++ solution](../../solutions/atcoder/implementation/abc219_b_maritozzo.cpp)

## Try first

Each control digit selects one of the three strings.

## Reasoning

Each control digit selects one of the three strings. Emit selected strings sequentially to realize the requested concatenation.

## Cost

- Time: **O(output length)**.
- Extra space: **O(input length)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
