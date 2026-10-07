# Apple Division

[Original problem](https://cses.fi/problemset/task/1623/) · [C++ solution](../../solutions/cses/introductory/1623_apple_division.cpp)

## Try first

With at most twenty apples, enumerate which ones belong to the first group.

## Reasoning

Each apple has two choices, so the recursion visits every subset exactly once. If its sum is s, the other group has sum total-s, giving difference abs(total-2s). The minimum over all subsets is therefore optimal.

## Cost

- Time: **O(2^n)**.
- Extra space: **O(n)**.

## C++ takeaway

Pass a generic lambda to itself to express recursion without a global variable.

## Watch for

Subset sums can exceed int even when individual weights fit.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
