# Weak Beats

[Original problem](https://atcoder.jp/contests/abc323/tasks/abc323_a) · [C++ solution](../../solutions/atcoder/implementation/abc323_a_weak_beats.cpp)

## Try first

Even one-based positions correspond to odd zero-based indices.

## Reasoning

Even one-based positions correspond to odd zero-based indices. Check exactly those eight characters for zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
