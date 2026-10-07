# A Unique Letter

[Original problem](https://atcoder.jp/contests/abc260/tasks/abc260_a) · [C++ solution](../../solutions/atcoder/implementation/abc260_a_a_unique_letter.cpp)

## Try first

Count occurrences of each candidate character and return the first with frequency one.

## Reasoning

Count occurrences of each candidate character and return the first with frequency one. If no such character exists, the required impossibility marker is valid.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
