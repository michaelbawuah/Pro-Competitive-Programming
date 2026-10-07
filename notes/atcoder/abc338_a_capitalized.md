# Capitalized?

[Original problem](https://atcoder.jp/contests/abc338/tasks/abc338_a) · [C++ solution](../../solutions/atcoder/implementation/abc338_a_capitalized.cpp)

## Try first

Validate the first character against uppercase letters and every subsequent character against lowercase letters.

## Reasoning

Validate the first character against uppercase letters and every subsequent character against lowercase letters. A one-letter uppercase string satisfies the empty suffix condition.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
