# Sequence of Strings

[Original problem](https://atcoder.jp/contests/abc284/tasks/abc284_a) · [C++ solution](../../solutions/atcoder/implementation/abc284_a_sequence_of_strings.cpp)

## Try first

Store the input strings in order, then traverse their indices from the last to the first.

## Reasoning

Store the input strings in order, then traverse their indices from the last to the first. Each string itself remains unchanged.

## Cost

- Time: **O(total characters)**.
- Extra space: **O(total characters)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
