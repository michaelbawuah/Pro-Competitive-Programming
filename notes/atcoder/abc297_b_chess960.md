# chess960

[Original problem](https://atcoder.jp/contests/abc297/tasks/abc297_b) · [C++ solution](../../solutions/atcoder/implementation/abc297_b_chess960.cpp)

## Try first

Record both bishop and rook positions and the king position.

## Reasoning

Record both bishop and rook positions and the king position. Opposite bishop parity and strict placement of the king between the two rooks are precisely the required conditions.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
