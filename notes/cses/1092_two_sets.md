# Two Sets

[Original problem](https://cses.fi/problemset/task/1092/) · [C++ solution](../../solutions/cses/introductory/1092_two_sets.cpp)

## Try first

A partition exists only when the total is even; build one half from large numbers downward.

## Reasoning

Every integer from zero to 1+...+k is representable using a subset of 1..k. Before considering k, the remaining target lies in that interval. Taking k when possible leaves a representable remainder; skipping it leaves a target below k, also representable. Thus an even total can be split exactly.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A 64-bit total matters even though n itself is only one million.

## Watch for

The two output sets must be disjoint and together contain every number exactly once.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
