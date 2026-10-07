# Bombs

[Original problem](https://atcoder.jp/contests/abc295/tasks/abc295_b) · [C++ solution](../../solutions/atcoder/implementation/abc295_b_bombs.cpp)

## Try first

Read bomb positions and powers only from the original board.

## Reasoning

Read bomb positions and powers only from the original board. Clear every cell within each bomb Manhattan radius in a separate result board, preserving simultaneous explosions even if one blast reaches another bomb.

## Cost

- Time: **O(R^2 C^2)**.
- Extra space: **O(RC)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
