# Climbing Takahashi

[Original problem](https://atcoder.jp/contests/abc235/tasks/abc235_b) · [C++ solution](../../solutions/atcoder/implementation/abc235_b_climbing_takahashi.cpp)

## Try first

Keep climbing only while each next height is strictly greater.

## Reasoning

Keep climbing only while each next height is strictly greater. Once a non-increase occurs, movement stops permanently even if later mountains are taller.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
