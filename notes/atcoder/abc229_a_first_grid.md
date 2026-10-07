# First Grid

[Original problem](https://atcoder.jp/contests/abc229/tasks/abc229_a) · [C++ solution](../../solutions/atcoder/implementation/abc229_a_first_grid.cpp)

## Try first

With at least two black cells in a two-by-two grid, only the two diagonal pairs are disconnected.

## Reasoning

With at least two black cells in a two-by-two grid, only the two diagonal pairs are disconnected. Every configuration with three or four black cells is connected.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
