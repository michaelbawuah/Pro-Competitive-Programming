# Knapsack 2

[Original problem](https://atcoder.jp/contests/dp/tasks/dp_e) · [C++ solution](../../solutions/atcoder/dynamic_programming/dp_e_knapsack_2.cpp)

## Try first

Weight is too large to index, but the total value is bounded by 100,000.

## Reasoning

minimum_weight[v] is the least weight of a subset with total value exactly v. The empty subset gives weight zero at value zero; other values start unreachable. For each item, either retain the previous weight or add the item to a subset of value v-item_value. Descending values enforce single use. The largest value whose minimum weight fits the capacity is optimal.

## Cost

- Time: **O(n V), V = sum of values**.
- Extra space: **O(V + n)**.

## C++ takeaway

Changing which quantity is stored as the state can make the same optimization problem tractable under different constraints.

## Watch for

Use infinity for unreachable exact values rather than zero. Total selected weight can exceed a 32-bit integer even when capacity does not.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
