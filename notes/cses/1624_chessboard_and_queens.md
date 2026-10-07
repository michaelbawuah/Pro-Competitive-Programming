# Chessboard and Queens

[Original problem](https://cses.fi/problemset/task/1624/) · [C++ solution](../../solutions/cses/introductory/1624_chessboard_and_queens.cpp)

## Try first

Place one queen in each row and reject occupied columns and diagonals early.

## Reasoning

Any valid board has exactly one queen per row. The search tries every permitted column for that row and maintains occupied columns and both diagonal families. Pruned choices already violate a requirement, while every valid arrangement survives to a leaf exactly once.

## Cost

- Time: **O(8 * 8!) upper bound**.
- Extra space: **O(8) recursion, fixed board**.

## C++ takeaway

Undo every marked constraint after the recursive call; otherwise sibling branches interfere.

## Watch for

Blocked cells forbid placing queens but do not block attacks.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
