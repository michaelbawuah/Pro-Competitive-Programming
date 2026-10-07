# Tournament Result

[Original problem](https://atcoder.jp/contests/abc261/tasks/abc261_b) · [C++ solution](../../solutions/atcoder/implementation/abc261_b_tournament_result.cpp)

## Try first

Each unordered player pair has two table entries.

## Reasoning

Each unordered player pair has two table entries. A win must pair with a loss and a draw with a draw; checking every pair enforces all consistency conditions.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
