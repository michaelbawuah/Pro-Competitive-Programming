# Yay!

[Original problem](https://atcoder.jp/contests/abc342/tasks/abc342_a) · [C++ solution](../../solutions/atcoder/implementation/abc342_a_yay.cpp)

## Try first

Count letter occurrences, then locate the character whose frequency is one.

## Reasoning

Count letter occurrences, then locate the character whose frequency is one. Under the promise, this is the sole different character, and its one-based position is the answer.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
