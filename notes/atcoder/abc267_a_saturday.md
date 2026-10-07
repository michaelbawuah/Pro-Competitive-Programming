# Saturday

[Original problem](https://atcoder.jp/contests/abc267/tasks/abc267_a) · [C++ solution](../../solutions/atcoder/implementation/abc267_a_saturday.cpp)

## Try first

Map the weekday to its position in the Monday-through-Friday list.

## Reasoning

Map the weekday to its position in the Monday-through-Friday list. Saturday is five days after Monday, so subtract that zero-based position from five.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
