# Increasing Subsequence

[Original problem](https://cses.fi/problemset/task/1145/) · [C++ solution](../../solutions/cses/dynamic_programming/1145_increasing_subsequence.cpp)

## Try first

For each subsequence length, retain the smallest possible final value.

## Reasoning

tails[k] is the minimum ending value of an increasing subsequence of length k + 1. Replacing the first tail at least as large as the new value preserves feasible lengths and makes extension easier. Appending creates a longer subsequence.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

lower_bound finds the first value >= the target. upper_bound would allow equal values to extend the length.

## Watch for

tails itself need not be an actual subsequence of the input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
