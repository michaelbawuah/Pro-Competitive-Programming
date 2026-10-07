# Missing Coin Sum

[Original problem](https://cses.fi/problemset/task/2183/) · [C++ solution](../../solutions/cses/sorting_searching/2183_missing_coin_sum.cpp)

## Try first

Maintain the entire interval of sums already known to be constructible.

## Reasoning

Before a coin is considered, every sum in [0,missing) is constructible. A coin at most missing extends that interval to [0,missing+coin). If it is larger, missing cannot be made using it or any later coin, so the first gap is final.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

The reachable prefix may exceed 32 bits; its endpoint is long long.

## Watch for

A missing coin of value 1 makes the answer 1 immediately.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
