# Frog 1

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_a) · [C++ solution](../../solutions/atcoder/educational_dp/dp_a_frog_1.cpp)

## Try first

The final jump came from one of the previous two stones.

## Reasoning

Let best[i] be the minimum cost to reach stone i. Every valid path ends with a jump from i - 1 or i - 2. Both smaller states are already optimal when i is processed, so taking the cheaper extension gives an optimal path to i.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::abs has a long long overload in cstdlib; use a signed type before subtraction.

## Watch for

The second predecessor does not exist for stone 2.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
