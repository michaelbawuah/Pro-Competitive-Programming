# Frog 2

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_b) · [C++ solution](../../solutions/atcoder/educational_dp/dp_b_frog_2.cpp)

## Try first

Generalize Frog 1: enumerate every permitted final jump.

## Reasoning

Any path to stone i has a final predecessor among the previous k stones. Each predecessor is earlier, so its best cost is settled. The minimum of all valid extensions gives the optimal cost.

## Cost

- Time: **O(n * k)**.
- Extra space: **O(n)**.

## C++ takeaway

The conjunction in the loop condition bounds both jump length and vector indexing.

## Watch for

k can exceed the number of earlier stones.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
