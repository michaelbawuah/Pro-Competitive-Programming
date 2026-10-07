# Round-Robin Tournament

[Original problem](https://atcoder.jp/contests/abc323/tasks/abc323_b) · [C++ solution](../../solutions/atcoder/implementation/abc323_b_round_robin_tournament.cpp)

## Try first

Count wins for each player.

## Reasoning

Count wins for each player. Sorting by negative win count and then player number gives more wins first and smaller indices first on ties.

## Cost

- Time: **O(n^2+n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
