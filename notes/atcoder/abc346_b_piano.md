# Piano

[Original problem](https://atcoder.jp/contests/abc346/tasks/abc346_b) · [C++ solution](../../solutions/atcoder/implementation/abc346_b_piano.cpp)

## Try first

Any candidate substring has length W+B and one of twelve starting phases in the periodic keyboard.

## Reasoning

Any candidate substring has length W+B and one of twelve starting phases in the periodic keyboard. Count whites for each phase; the remaining characters automatically give the black count.

## Cost

- Time: **O(12(W+B))**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
