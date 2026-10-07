# Bouzu Mekuri

[Original problem](https://atcoder.jp/contests/abc210/tasks/abc210_b) · [C++ solution](../../solutions/atcoder/implementation/abc210_b_bouzu_mekuri.cpp)

## Try first

The game ends at the first bad card.

## Reasoning

The game ends at the first bad card. Its zero-based index parity identifies the player drawing it, who loses.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
