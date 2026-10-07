# Move Right

[Original problem](https://atcoder.jp/contests/abc247/tasks/abc247_a) · [C++ solution](../../solutions/atcoder/implementation/abc247_a_move_right.cpp)

## Try first

The leftmost square receives nobody, and each other square receives its left neighbor.

## Reasoning

The leftmost square receives nobody, and each other square receives its left neighbor. Prefix zero and retain the first three old positions.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

substr(start,length) uses a zero-based start and a character count, not an ending index. Omitting the length copies the suffix through the end.

## Watch for

Distinguish an inclusive endpoint from a substring length; check the shortest permitted input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
