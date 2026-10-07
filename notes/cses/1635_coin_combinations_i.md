# Coin Combinations I

[Original problem](https://cses.fi/problemset/task/1635/) · [C++ solution](../../solutions/cses/dynamic_programming/1635_coin_combinations_i.cpp)

## Try first

Classify each ordered sequence by its last coin.

## Reasoning

Let ways[s] count ordered sequences totaling s. Removing the last coin c leaves a sequence totaling s-c. These classes are disjoint, so sum ways[s-c] over eligible coins. Positive coin values ensure every predecessor is already computed. ways[0]=1 represents the empty prefix. Iterating sums outside coins counts different orders separately.

## Cost

- Time: **O(n x)**.
- Extra space: **O(n + x)**.

## C++ takeaway

Reducing after every addition keeps the sum of two residues below INT_MAX.

## Watch for

Swapping the loop order changes this into Coin Combinations II. The empty prefix must contribute one way.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
