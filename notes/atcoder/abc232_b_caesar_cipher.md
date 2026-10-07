# Caesar Cipher

[Original problem](https://atcoder.jp/contests/abc232/tasks/abc232_b) · [C++ solution](../../solutions/atcoder/implementation/abc232_b_caesar_cipher.cpp)

## Try first

The first pair fixes the required shift modulo twenty-six.

## Reasoning

The first pair fixes the required shift modulo twenty-six. A uniform Caesar shift exists precisely when every other pair has that same modular difference.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
