# Alternately

[Original problem](https://atcoder.jp/contests/abc296/tasks/abc296_a) · [C++ solution](../../solutions/atcoder/implementation/abc296_a_alternately.cpp)

## Try first

Alternation is equivalent to every adjacent character pair being different.

## Reasoning

Alternation is equivalent to every adjacent character pair being different. Check all neighboring pairs; a one-person row satisfies the condition vacuously.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
