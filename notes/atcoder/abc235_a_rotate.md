# Rotate

[Original problem](https://atcoder.jp/contests/abc235/tasks/abc235_a) · [C++ solution](../../solutions/atcoder/implementation/abc235_a_rotate.cpp)

## Try first

Across the three rotations, each digit appears once in each decimal position.

## Reasoning

Across the three rotations, each digit appears once in each decimal position. Its combined coefficient is 100+10+1.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
