# Longest Palindrome

[Original problem](https://atcoder.jp/contests/abc320/tasks/abc320_b) · [C++ solution](../../solutions/atcoder/implementation/abc320_b_longest_palindrome.cpp)

## Try first

Every palindrome has a center at a character or between two characters.

## Reasoning

Every palindrome has a center at a character or between two characters. Expand outward from each such center while both ends match, retaining the largest valid length.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
