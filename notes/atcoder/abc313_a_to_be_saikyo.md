# To Be Saikyo

[Original problem](https://atcoder.jp/contests/abc313/tasks/abc313_a) · [C++ solution](../../solutions/atcoder/implementation/abc313_a_to_be_saikyo.cpp)

## Try first

Each opponent requires at least their score minus the first score plus one additional point.

## Reasoning

Each opponent requires at least their score minus the first score plus one additional point. Take the maximum of these deficits and zero; with no opponents, zero remains sufficient.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
