# Triple Metre

[Original problem](https://atcoder.jp/contests/abc230/tasks/abc230_b) · [C++ solution](../../solutions/atcoder/implementation/abc230_b_triple_metre.cpp)

## Try first

A substring of a period-three infinite string has one of three starting phases.

## Reasoning

A substring of a period-three infinite string has one of three starting phases. Compare the input against all phases modulo three.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
