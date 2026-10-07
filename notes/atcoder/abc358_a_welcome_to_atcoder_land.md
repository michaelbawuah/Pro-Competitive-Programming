# Welcome to AtCoder Land

[Original problem](https://atcoder.jp/contests/abc358/tasks/abc358_a) · [C++ solution](../../solutions/atcoder/implementation/abc358_a_welcome_to_atcoder_land.cpp)

## Try first

Require both words to equal their specified spellings exactly, including letter case.

## Reasoning

Require both words to equal their specified spellings exactly, including letter case.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
