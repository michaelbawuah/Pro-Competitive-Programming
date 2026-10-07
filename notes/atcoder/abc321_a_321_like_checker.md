# 321-like Checker

[Original problem](https://atcoder.jp/contests/abc321/tasks/abc321_a) · [C++ solution](../../solutions/atcoder/implementation/abc321_a_321_like_checker.cpp)

## Try first

Strictly decreasing digits mean every adjacent pair decreases.

## Reasoning

Strictly decreasing digits mean every adjacent pair decreases. Compare neighboring digit characters; their character order matches numeric digit order.

## Cost

- Time: **O(number of digits)**.
- Extra space: **O(number of digits)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
