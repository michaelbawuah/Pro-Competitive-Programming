# Rightmost

[Original problem](https://atcoder.jp/contests/abc276/tasks/abc276_a) · [C++ solution](../../solutions/atcoder/implementation/abc276_a_rightmost.cpp)

## Try first

Scan left to right and overwrite the answer at every occurrence of a.

## Reasoning

Scan left to right and overwrite the answer at every occurrence of a. The final stored index is the rightmost; the initial minus one survives if none occurs.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
