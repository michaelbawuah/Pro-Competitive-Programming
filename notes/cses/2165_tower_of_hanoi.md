# Tower of Hanoi

[Original problem](https://cses.fi/problemset/task/2165/) · [C++ solution](../../solutions/cses/introductory/2165_tower_of_hanoi.cpp)

## Try first

Move the smaller tower away, move the largest disk, then rebuild on it.

## Reasoning

Before the largest disk can move from peg 1 to peg 3, every smaller disk must be on peg 2. That requires an optimal transfer of n-1 disks, followed by one move of the largest and another transfer of n-1. The recurrence T(n)=2T(n-1)+1 gives 2^n-1 moves.

## Cost

- Time: **O(2^n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use a helper whose parameters state the source, target, and spare roles.

## Watch for

A move cannot place a larger disk on a smaller one; the checker simulates all pegs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
