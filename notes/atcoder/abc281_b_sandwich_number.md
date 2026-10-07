# Sandwich Number

[Original problem](https://atcoder.jp/contests/abc281/tasks/abc281_b) · [C++ solution](../../solutions/atcoder/implementation/abc281_b_sandwich_number.cpp)

## Try first

Require exactly eight characters, uppercase endpoint letters, and six middle digits whose first digit is nonzero.

## Reasoning

Require exactly eight characters, uppercase endpoint letters, and six middle digits whose first digit is nonzero. These checks enforce the integer range without parsing malformed text.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
