# flip

[Original problem](https://atcoder.jp/contests/abc289/tasks/abc289_a) · [C++ solution](../../solutions/atcoder/implementation/abc289_a_flip.cpp)

## Try first

Replace every bit independently by the other bit.

## Reasoning

Replace every bit independently by the other bit. Each original character is visited exactly once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
