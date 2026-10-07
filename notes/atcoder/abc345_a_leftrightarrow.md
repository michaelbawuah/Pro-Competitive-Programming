# Leftrightarrow

[Original problem](https://atcoder.jp/contests/abc345/tasks/abc345_a) · [C++ solution](../../solutions/atcoder/implementation/abc345_a_leftrightarrow.cpp)

## Try first

Check the opening and closing arrowheads and require every interior character to be equals.

## Reasoning

Check the opening and closing arrowheads and require every interior character to be equals. The minimum input length ensures at least one interior character.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
