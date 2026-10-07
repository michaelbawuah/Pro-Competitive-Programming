# Knapsack 1

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_d) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_d_knapsack_1.cpp)

## Try first

The capacity bound is small enough to index the DP by available weight.

## Reasoning

After each item, best[c] is the maximum value achievable with capacity c. Either omit the new item or include it alongside an earlier solution with capacity c-weight. Descending capacities ensure that predecessor still belongs to the previous item set, preventing reuse. Zero initialization represents the always-valid empty selection.

## Cost

- Time: **O(n W)**.
- Extra space: **O(W)**.

## C++ takeaway

The weight index fits in int, but the sum of item values requires long long.

## Watch for

Ascending capacity updates would allow an item to be selected repeatedly.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
