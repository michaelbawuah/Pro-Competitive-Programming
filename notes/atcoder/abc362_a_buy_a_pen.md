# Buy a Pen

[Original problem](https://atcoder.jp/contests/abc362/tasks/abc362_a) · [C++ solution](../../solutions/atcoder/implementation/abc362_a_buy_a_pen.cpp)

## Try first

Exclude the disliked color and choose the smaller of the two remaining pen prices.

## Reasoning

Exclude the disliked color and choose the smaller of the two remaining pen prices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

std::string provides zero-based character access, while size() returns an unsigned count. Guard neighbor indices and use the string length when scanning its characters.

## Watch for

Preserve letter case and exact symbols; a character index and its one-based reported position differ by one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
