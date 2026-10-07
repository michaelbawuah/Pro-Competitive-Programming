# Stones

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_k) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_k_stones.cpp)

## Try first

A position is winning if some move hands the opponent a losing position.

## Reasoning

With zero stones there is no legal move, so the player to move loses. For any larger pile, a move to a losing state guarantees a win; if every legal move reaches a winning state, the opponent can always win. Each move reduces the pile, so increasing stone counts computes all dependencies first. This induction characterizes optimal play for both players.

## Cost

- Time: **O(n K)**.
- Extra space: **O(n + K)**.

## C++ takeaway

A boolean DP expresses winning and losing states directly; the input's sorted moves allow an early break.

## Watch for

The states describe the player whose turn it is, regardless of their name. Taking the largest possible move is not always optimal.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
