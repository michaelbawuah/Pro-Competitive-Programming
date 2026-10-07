# Majority

[Original problem](https://atcoder.jp/contests/abc287/tasks/abc287_a) · [C++ solution](../../solutions/atcoder/implementation/abc287_a_majority.cpp)

## Try first

Count agreeing voters.

## Reasoning

Count agreeing voters. A strict majority means twice that count exceeds the total number of voters.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
