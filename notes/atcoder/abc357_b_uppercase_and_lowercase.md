# Uppercase and Lowercase

[Original problem](https://atcoder.jp/contests/abc357/tasks/abc357_b) · [C++ solution](../../solutions/atcoder/implementation/abc357_b_uppercase_and_lowercase.cpp)

## Try first

Count uppercase letters before modifying the string.

## Reasoning

Count uppercase letters before modifying the string. The majority determines the target case; convert only characters of the other case while preserving alphabet positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
