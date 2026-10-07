# September

[Original problem](https://atcoder.jp/contests/abc373/tasks/abc373_a) · [C++ solution](../../solutions/atcoder/implementation/abc373_a_september.cpp)

## Try first

Read the twelve strings with one-based indices and count those whose length equals their index.

## Reasoning

Read the twelve strings with one-based indices and count those whose length equals their index.

## Cost

- Time: **O(total characters)**.
- Extra space: **O(max length)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
