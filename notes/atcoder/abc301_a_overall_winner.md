# Overall Winner

[Original problem](https://atcoder.jp/contests/abc301/tasks/abc301_a) · [C++ solution](../../solutions/atcoder/implementation/abc301_a_overall_winner.cpp)

## Try first

A larger total win count decides immediately.

## Reasoning

A larger total win count decides immediately. In a tie, the final-game winner reaches the tied total last, so the other player wins the tie-break.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
