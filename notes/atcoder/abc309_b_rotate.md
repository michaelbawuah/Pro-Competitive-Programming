# Rotate

[Original problem](https://atcoder.jp/contests/abc309/tasks/abc309_b) · [C++ solution](../../solutions/atcoder/implementation/abc309_b_rotate.cpp)

## Try first

Copy the grid, then move the top edge right, right edge down, bottom edge left, and left edge up.

## Reasoning

Copy the grid, then move the top edge right, right edge down, bottom edge left, and left edge up. Reading exclusively from the original grid makes the border movement simultaneous and preserves the interior.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
