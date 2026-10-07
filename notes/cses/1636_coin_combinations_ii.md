# Coin Combinations II

[Original problem](https://cses.fi/problemset/task/1636/) · [C++ solution](../../solutions/cses/dynamic_programming/1636_coin_combinations_ii.cpp)

## Try first

Make the coin type the outer loop to avoid counting reorderings.

## Reasoning

After processing a coin type, ways[s] counts combinations using only processed types. Increasing sums allow the current type to appear repeatedly; processing each type once gives each multiset a unique construction. x is the target sum.

## Cost

- Time: **O(n * x)**.
- Extra space: **O(x)**.

## C++ takeaway

Changing loop order changes what the DP counts; it is part of correctness, not just style.

## Watch for

The task supplies distinct coin values. Do not use decreasing sums for unlimited coins.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
