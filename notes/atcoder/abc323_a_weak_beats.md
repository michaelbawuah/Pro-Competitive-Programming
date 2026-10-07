# Weak Beats

[Original problem](https://atcoder.jp/contests/abc323/tasks/abc323_a) · [C++ solution](../../solutions/atcoder/implementation/abc323_a_weak_beats.cpp)

## Try first

Even one-based positions correspond to odd zero-based indices.

## Reasoning

Even one-based positions correspond to odd zero-based indices. Check exactly those eight characters for zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
