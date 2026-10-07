# A Healthy Breakfast

[Original problem](https://atcoder.jp/contests/abc360/tasks/abc360_a) · [C++ solution](../../solutions/atcoder/implementation/abc360_a_a_healthy_breakfast.cpp)

## Try first

Each plate marker occurs exactly once.

## Reasoning

Each plate marker occurs exactly once. Rice is to the left of miso soup precisely when its string position is smaller.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
