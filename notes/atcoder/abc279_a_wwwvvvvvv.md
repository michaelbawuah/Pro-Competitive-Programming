# wwwvvvvvv

[Original problem](https://atcoder.jp/contests/abc279/tasks/abc279_a) · [C++ solution](../../solutions/atcoder/implementation/abc279_a_wwwvvvvvv.cpp)

## Try first

Each v contributes one bottom and each w contributes two.

## Reasoning

Each v contributes one bottom and each w contributes two. Add these independent per-character contributions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
