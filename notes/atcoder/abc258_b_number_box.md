# Number Box

[Original problem](https://atcoder.jp/contests/abc258/tasks/abc258_b) · [C++ solution](../../solutions/atcoder/implementation/abc258_b_number_box.cpp)

## Try first

A path is determined by its starting cell and one of eight directions.

## Reasoning

A path is determined by its starting cell and one of eight directions. Enumerate them all, wrap both coordinates modulo N, and accumulate each N-digit number in a 64-bit integer.

## Cost

- Time: **O(n^3)**.
- Extra space: **O(n^2)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
