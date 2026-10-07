# Nearest Smaller Values

[Original problem](https://cses.fi/problemset/task/1645/) · [C++ solution](../../solutions/cses/sorting_searching/1645_nearest_smaller_values.cpp)

## Try first

Discard earlier candidates that are at least as large as the current value.

## Reasoning

A popped candidate can never be the nearest smaller predecessor for a future element: the current value is no larger and is closer. The remaining stack has increasing values, so its top is the nearest smaller predecessor. Every element is pushed once and popped at most once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector of (value,index) pairs acts as a compact stack.

## Watch for

The comparison is >= because the answer must be strictly smaller.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
