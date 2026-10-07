# Couples

[Original problem](https://atcoder.jp/contests/abc359/tasks/abc359_b) · [C++ solution](../../solutions/atcoder/implementation/abc359_b_couples.cpp)

## Try first

Exactly one person between equal colors means their positions differ by two.

## Reasoning

Exactly one person between equal colors means their positions differ by two. Compare every pair of positions at that distance; each color occurs only twice, so no color is counted more than once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
