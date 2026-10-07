# Echo

[Original problem](https://atcoder.jp/contests/abc306/tasks/abc306_a) · [C++ solution](../../solutions/atcoder/implementation/abc306_a_echo.cpp)

## Try first

Visit original characters in order and emit each twice.

## Reasoning

Visit original characters in order and emit each twice. This duplicates characters without duplicating or reordering the whole string.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
