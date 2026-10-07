# camel Case

[Original problem](https://atcoder.jp/contests/abc291/tasks/abc291_a) · [C++ solution](../../solutions/atcoder/implementation/abc291_a_camel_case.cpp)

## Try first

Scan the characters and identify the guaranteed unique uppercase letter by its character range.

## Reasoning

Scan the characters and identify the guaranteed unique uppercase letter by its character range. Print its index plus one.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
