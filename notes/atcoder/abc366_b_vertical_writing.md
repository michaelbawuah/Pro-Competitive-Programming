# Vertical Writing

[Original problem](https://atcoder.jp/contests/abc366/tasks/abc366_b) · [C++ solution](../../solutions/atcoder/implementation/abc366_b_vertical_writing.cpp)

## Try first

For each original character column, read rows bottom to top, filling missing characters with stars.

## Reasoning

For each original character column, read rows bottom to top, filling missing characters with stars. Remove only trailing stars so internal alignment remains intact.

## Cost

- Time: **O(NM), M=max length**.
- Extra space: **O(total characters+N)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
