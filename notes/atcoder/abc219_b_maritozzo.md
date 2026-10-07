# Maritozzo

[Original problem](https://atcoder.jp/contests/abc219/tasks/abc219_b) · [C++ solution](../../solutions/atcoder/implementation/abc219_b_maritozzo.cpp)

## Try first

Each control digit selects one of the three strings.

## Reasoning

Each control digit selects one of the three strings. Emit selected strings sequentially to realize the requested concatenation.

## Cost

- Time: **O(output length)**.
- Extra space: **O(input length)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
