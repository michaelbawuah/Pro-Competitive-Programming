# Qual B

[Original problem](https://atcoder.jp/contests/abc290/tasks/abc290_b) · [C++ solution](../../solutions/atcoder/implementation/abc290_b_qual_b.cpp)

## Try first

Scan contestants in rank order.

## Reasoning

Scan contestants in rank order. Preserve the first K willing contestants and replace every later willing mark with x; unwilling contestants remain x.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
