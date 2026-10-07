# Tires

[Original problem](https://atcoder.jp/contests/abc224/tasks/abc224_a) · [C++ solution](../../solutions/atcoder/implementation/abc224_a_tires.cpp)

## Try first

The two promised suffixes have different final letters, so the last character determines which suffix occurs.

## Reasoning

The two promised suffixes have different final letters, so the last character determines which suffix occurs.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
