# Six Characters

[Original problem](https://atcoder.jp/contests/abc251/tasks/abc251_a) · [C++ solution](../../solutions/atcoder/implementation/abc251_a_six_characters.cpp)

## Try first

Cycle through the original string positions modulo its length until six characters have been emitted.

## Reasoning

Cycle through the original string positions modulo its length until six characters have been emitted. The permitted lengths all divide six.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
