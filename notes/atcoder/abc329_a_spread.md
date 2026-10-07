# Spread

[Original problem](https://atcoder.jp/contests/abc329/tasks/abc329_a) · [C++ solution](../../solutions/atcoder/implementation/abc329_a_spread.cpp)

## Try first

Output the characters in original order and place one space between neighboring characters, with a newline after the last.

## Reasoning

Output the characters in original order and place one space between neighboring characters, with a newline after the last.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
