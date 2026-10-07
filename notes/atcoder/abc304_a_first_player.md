# First Player

[Original problem](https://atcoder.jp/contests/abc304/tasks/abc304_a) · [C++ solution](../../solutions/atcoder/implementation/abc304_a_first_player.cpp)

## Try first

Locate the unique minimum age, then traverse the original seating order cyclically from that index.

## Reasoning

Locate the unique minimum age, then traverse the original seating order cyclically from that index. Modulo N wraps the last seat to the first.

## Cost

- Time: **O(total name length+N)**.
- Extra space: **O(total name length+N)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
