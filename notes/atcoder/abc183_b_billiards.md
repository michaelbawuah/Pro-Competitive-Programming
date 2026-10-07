# Billiards

[Original problem](https://atcoder.jp/contests/abc183/tasks/abc183_b) · [C++ solution](../../solutions/atcoder/implementation/abc183_b_billiards.cpp)

## Try first

Reflect the goal across the wall.

## Reasoning

Reflect the goal across the wall. The straight line to that reflected point meets y=0 at the weighted horizontal average, giving equal incidence and reflection angles.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
