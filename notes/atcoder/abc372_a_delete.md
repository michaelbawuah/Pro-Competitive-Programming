# delete .

[Original problem](https://atcoder.jp/contests/abc372/tasks/abc372_a) · [C++ solution](../../solutions/atcoder/implementation/abc372_a_delete.cpp)

## Try first

Copy exactly the non-period characters in their original order.

## Reasoning

Copy exactly the non-period characters in their original order. If every character is a period, the resulting line is empty.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
