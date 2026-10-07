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

Subtract coordinates in a sufficiently wide signed type before applying abs or squaring. The operand types determine the arithmetic width of the intermediate result.

## Watch for

Squared distances can exceed individual coordinate bounds; ties and zero differences deserve separate attention.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
