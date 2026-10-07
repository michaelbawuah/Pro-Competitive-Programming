# racecar

[Original problem](https://atcoder.jp/contests/abc307/tasks/abc307_b) · [C++ solution](../../solutions/atcoder/implementation/abc307_b_racecar.cpp)

## Try first

Try every ordered pair of distinct indices because concatenation order matters.

## Reasoning

Try every ordered pair of distinct indices because concatenation order matters. A concatenation is a palindrome exactly when it equals its reverse.

## Cost

- Time: **O(n^2 L)**.
- Extra space: **O(nL)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
