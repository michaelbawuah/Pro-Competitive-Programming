# Rectangle Detection

[Original problem](https://atcoder.jp/contests/abc269/tasks/abc269_b) · [C++ solution](../../solutions/atcoder/implementation/abc269_b_rectangle_detection.cpp)

## Try first

The filled rectangle is nonempty.

## Reasoning

The filled rectangle is nonempty. Its smallest and largest occupied row and column are exactly its four defining boundaries.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
