# Go Straight and Turn Right

[Original problem](https://atcoder.jp/contests/abc244/tasks/abc244_b) · [C++ solution](../../solutions/atcoder/implementation/abc244_b_go_straight_and_turn_right.cpp)

## Try first

Store directions in clockwise order starting with east.

## Reasoning

Store directions in clockwise order starting with east. A right turn increments the direction modulo four; a straight move adds the corresponding unit vector.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
