# Long Loong

[Original problem](https://atcoder.jp/contests/abc336/tasks/abc336_a) · [C++ solution](../../solutions/atcoder/implementation/abc336_a_long_loong.cpp)

## Try first

Concatenate the fixed prefix L, exactly N lowercase o characters, and the fixed suffix ng.

## Reasoning

Concatenate the fixed prefix L, exactly N lowercase o characters, and the fixed suffix ng.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
