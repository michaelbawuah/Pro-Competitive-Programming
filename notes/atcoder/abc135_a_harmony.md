# Harmony

[Original problem](https://atcoder.jp/contests/abc135/tasks/abc135_a) · [C++ solution](../../solutions/atcoder/implementation/abc135_a_harmony.cpp)

## Try first

The only point equally distant from two distinct coordinates is their midpoint.

## Reasoning

The only point equally distant from two distinct coordinates is their midpoint. It is integral exactly when their sum is even.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
