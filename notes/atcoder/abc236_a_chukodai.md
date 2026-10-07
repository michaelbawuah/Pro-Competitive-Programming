# chukodai

[Original problem](https://atcoder.jp/contests/abc236/tasks/abc236_a) · [C++ solution](../../solutions/atcoder/implementation/abc236_a_chukodai.cpp)

## Try first

Convert both one-based positions to zero-based indices and swap those two characters.

## Reasoning

Convert both one-based positions to zero-based indices and swap those two characters. All other positions retain their values.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
