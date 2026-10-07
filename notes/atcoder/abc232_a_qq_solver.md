# QQ solver

[Original problem](https://atcoder.jp/contests/abc232/tasks/abc232_a) · [C++ solution](../../solutions/atcoder/implementation/abc232_a_qq_solver.cpp)

## Try first

The fixed three-character format places the two single-digit operands at positions zero and two.

## Reasoning

The fixed three-character format places the two single-digit operands at positions zero and two. Convert each character to its digit value and multiply.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
