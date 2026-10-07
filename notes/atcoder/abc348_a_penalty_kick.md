# Penalty Kick

[Original problem](https://atcoder.jp/contests/abc348/tasks/abc348_a) · [C++ solution](../../solutions/atcoder/implementation/abc348_a_penalty_kick.cpp)

## Try first

Use one-based kick numbers and emit failure exactly at multiples of three, success at all other positions..

## Reasoning

Use one-based kick numbers and emit failure exactly at multiples of three, success at all other positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
