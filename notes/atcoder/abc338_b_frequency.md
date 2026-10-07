# Frequency

[Original problem](https://atcoder.jp/contests/abc338/tasks/abc338_b) · [C++ solution](../../solutions/atcoder/implementation/abc338_b_frequency.cpp)

## Try first

Count all letter frequencies, then scan letters in alphabetical order.

## Reasoning

Count all letter frequencies, then scan letters in alphabetical order. Replace the candidate only on a strictly larger frequency so the earliest letter wins ties.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
