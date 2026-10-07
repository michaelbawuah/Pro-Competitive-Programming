# Lexicographic Order

[Original problem](https://atcoder.jp/contests/abc217/tasks/abc217_a) · [C++ solution](../../solutions/atcoder/implementation/abc217_a_lexicographic_order.cpp)

## Try first

The standard string less-than operator implements lexicographic ordering, including the shorter-prefix rule.

## Reasoning

The standard string less-than operator implements lexicographic ordering, including the shorter-prefix rule.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
