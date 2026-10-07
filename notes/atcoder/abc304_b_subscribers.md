# Subscribers

[Original problem](https://atcoder.jp/contests/abc304/tasks/abc304_b) · [C++ solution](../../solutions/atcoder/implementation/abc304_b_subscribers.cpp)

## Try first

The specified intervals all preserve the first three decimal digits and zero every later digit.

## Reasoning

The specified intervals all preserve the first three decimal digits and zero every later digit. A string representation implements this directly and leaves shorter numbers intact.

## Cost

- Time: **O(number of digits)**.
- Extra space: **O(number of digits)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
