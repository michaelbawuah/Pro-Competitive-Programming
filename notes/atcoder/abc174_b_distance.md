# Distance

[Original problem](https://atcoder.jp/contests/abc174/tasks/abc174_b) · [C++ solution](../../solutions/atcoder/implementation/abc174_b_distance.cpp)

## Try first

Square the nonnegative distance inequality to avoid square roots.

## Reasoning

Square the nonnegative distance inequality to avoid square roots. Use 64-bit products for the largest coordinates.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
