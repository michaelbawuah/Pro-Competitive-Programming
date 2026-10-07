# Rotate

[Original problem](https://atcoder.jp/contests/abc235/tasks/abc235_a) · [C++ solution](../../solutions/atcoder/implementation/abc235_a_rotate.cpp)

## Try first

Across the three rotations, each digit appears once in each decimal position.

## Reasoning

Across the three rotations, each digit appears once in each decimal position. Its combined coefficient is 100+10+1.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
