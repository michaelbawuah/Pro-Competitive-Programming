# Money Sums

[Original problem](https://cses.fi/problemset/task/1745/) · [C++ solution](../../solutions/cses/dynamic_programming/1745_money_sums.cpp)

## Try first

Record which sums can be formed after each coin; each physical coin is usable once.

## Reasoning

Before processing a coin c, reachable[s] describes subsets of earlier coins. A new subset either omits c or adds c to an earlier subset totaling s-c. Descending sums keep reachable[s-c] from being updated by this same coin. Induction over the coins gives every achievable sum, which is then listed in increasing order.

## Cost

- Time: **O(n S), S = sum of coins**.
- Extra space: **O(S)**.

## C++ takeaway

Descending integer loops are central to 0/1 knapsack. Avoid unsigned loop variables when the stopping condition crosses zero.

## Watch for

Do not include the empty-subset sum zero in the output. Duplicate values are separate usable coins.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
