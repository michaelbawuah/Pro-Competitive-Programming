# Pawn on a Grid

[Original problem](https://atcoder.jp/contests/abc280/tasks/abc280_a) · [C++ solution](../../solutions/atcoder/implementation/abc280_a_pawn_on_a_grid.cpp)

## Try first

Each occupied cell is represented by one hash character.

## Reasoning

Each occupied cell is represented by one hash character. Count hashes in every row and sum the row totals.

## Cost

- Time: **O(HW)**.
- Extra space: **O(W)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
