# Last Letter

[Original problem](https://atcoder.jp/contests/abc244/tasks/abc244_a) · [C++ solution](../../solutions/atcoder/implementation/abc244_a_last_letter.cpp)

## Try first

The input guarantees a nonempty string.

## Reasoning

The input guarantees a nonempty string. Its back element is exactly the requested final character.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
