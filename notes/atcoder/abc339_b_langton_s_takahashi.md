# Langton's Takahashi

[Original problem](https://atcoder.jp/contests/abc339/tasks/abc339_b) · [C++ solution](../../solutions/atcoder/implementation/abc339_b_langton_s_takahashi.cpp)

## Try first

Keep the ant position, direction, and cell colors explicitly.

## Reasoning

Keep the ant position, direction, and cell colors explicitly. Inspect the old color, flip it, turn in the corresponding direction, and move with modular wraparound.

## Cost

- Time: **O(N+HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
