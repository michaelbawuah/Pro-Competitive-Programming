# Chessboard

[Original problem](https://atcoder.jp/contests/abc296/tasks/abc296_b) · [C++ solution](../../solutions/atcoder/implementation/abc296_b_chessboard.cpp)

## Try first

The file letter increases left to right, while the rank decreases from eight to one as input rows move downward.

## Reasoning

The file letter increases left to right, while the rank decreases from eight to one as input rows move downward. Translate the unique occupied square with those two mappings.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
