# Cat

[Original problem](https://atcoder.jp/contests/abc286/tasks/abc286_b) · [C++ solution](../../solutions/atcoder/implementation/abc286_b_cat.cpp)

## Try first

Copy original characters in order and insert y after an n whose next original character is a.

## Reasoning

Copy original characters in order and insert y after an n whose next original character is a. This replaces every na without reprocessing inserted characters.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
