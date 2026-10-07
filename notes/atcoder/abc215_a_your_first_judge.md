# Your First Judge

[Original problem](https://atcoder.jp/contests/abc215/tasks/abc215_a) · [C++ solution](../../solutions/atcoder/implementation/abc215_a_your_first_judge.cpp)

## Try first

Exact string equality checks length, letter case, comma, and exclamation mark simultaneously.

## Reasoning

Exact string equality checks length, letter case, comma, and exclamation mark simultaneously.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
