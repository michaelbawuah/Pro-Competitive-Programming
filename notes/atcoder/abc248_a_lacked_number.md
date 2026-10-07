# Lacked Number

[Original problem](https://atcoder.jp/contests/abc248/tasks/abc248_a) · [C++ solution](../../solutions/atcoder/implementation/abc248_a_lacked_number.cpp)

## Try first

The ten digits sum to forty-five.

## Reasoning

The ten digits sum to forty-five. Each supplied digit occurs once, so subtracting their sum leaves the sole missing digit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
