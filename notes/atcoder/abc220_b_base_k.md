# Base K

[Original problem](https://atcoder.jp/contests/abc220/tasks/abc220_b) · [C++ solution](../../solutions/atcoder/implementation/abc220_b_base_k.cpp)

## Try first

Decode each numeral by multiplying its accumulated prefix by K and adding the next digit.

## Reasoning

Decode each numeral by multiplying its accumulated prefix by K and adding the next digit. Multiply the two decoded values in 64-bit arithmetic.

## Cost

- Time: **O(|A|+|B|)**.
- Extra space: **O(|A|+|B|)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
