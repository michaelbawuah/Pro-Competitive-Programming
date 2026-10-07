# Swap Odd and Even

[Original problem](https://atcoder.jp/contests/abc293/tasks/abc293_a) · [C++ solution](../../solutions/atcoder/implementation/abc293_a_swap_odd_and_even.cpp)

## Try first

Partition the even-length string into adjacent two-character blocks.

## Reasoning

Partition the even-length string into adjacent two-character blocks. Swap inside each block; the blocks are disjoint, so every character moves exactly once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
