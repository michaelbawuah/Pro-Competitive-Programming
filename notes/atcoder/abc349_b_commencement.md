# Commencement

[Original problem](https://atcoder.jp/contests/abc349/tasks/abc349_b) · [C++ solution](../../solutions/atcoder/implementation/abc349_b_commencement.cpp)

## Try first

Count each letter, then count how many distinct letters have each positive frequency.

## Reasoning

Count each letter, then count how many distinct letters have each positive frequency. Every such frequency class must contain either zero or two letters; absent letters are excluded.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
