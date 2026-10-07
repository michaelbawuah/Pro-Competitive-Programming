# Takahashi san

[Original problem](https://atcoder.jp/contests/abc325/tasks/abc325_a) · [C++ solution](../../solutions/atcoder/implementation/abc325_a_takahashi_san.cpp)

## Try first

Read both names to consume the input and print only the surname followed by the specified space and honorific.

## Reasoning

Read both names to consume the input and print only the surname followed by the specified space and honorific.

## Cost

- Time: **O(input length)**.
- Extra space: **O(input length)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
