# Roulette

[Original problem](https://atcoder.jp/contests/abc314/tasks/abc314_b) · [C++ solution](../../solutions/atcoder/implementation/abc314_b_roulette.cpp)

## Try first

Consider only people who bet on the outcome.

## Reasoning

Consider only people who bet on the outcome. Track their minimum number of bets, clear older candidates when a smaller count appears, and retain all ties in original index order.

## Cost

- Time: **O(total bets)**.
- Extra space: **O(total bets+N)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
