# Similar String

[Original problem](https://atcoder.jp/contests/abc303/tasks/abc303_a) · [C++ solution](../../solutions/atcoder/implementation/abc303_a_similar_string.cpp)

## Try first

Map each allowed similarity class to one representative: one to lowercase L and zero to lowercase O.

## Reasoning

Map each allowed similarity class to one representative: one to lowercase L and zero to lowercase O. Then corresponding characters are similar exactly when their representatives match.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
