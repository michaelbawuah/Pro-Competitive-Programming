# Minimizing Coins

[Original problem](https://cses.fi/problemset/task/1634/) · [C++ solution](../../solutions/cses/dynamic_programming/1634_minimizing_coins.cpp)

## Try first

Try each possible final coin for an exact sum.

## Reasoning

An optimal nonempty representation has some last coin. Removing it leaves an optimal representation for the smaller sum, or replacing that prefix would improve the whole answer. Take the minimum over all possible last coins. x is the target sum.

## Cost

- Time: **O(n * x)**.
- Extra space: **O(n + x)**.

## C++ takeaway

A finite sentinel x + 1 is larger than any valid coin count and remains safe when incremented.

## Watch for

A greedy largest-coin rule fails for denominations such as 1,3,4 and target 6.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
