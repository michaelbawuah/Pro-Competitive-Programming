# Weak Password

[Original problem](https://atcoder.jp/contests/abc212/tasks/abc212_b) · [C++ solution](../../solutions/atcoder/implementation/abc212_b_weak_password.cpp)

## Try first

Track both weak-pattern predicates separately: all digits equal, or every digit one greater modulo ten.

## Reasoning

Track both weak-pattern predicates separately: all digits equal, or every digit one greater modulo ten. Either predicate makes the PIN weak.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
