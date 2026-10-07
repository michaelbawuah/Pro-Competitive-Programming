# Permutations

[Original problem](https://cses.fi/problemset/task/1070/) · [C++ solution](../../solutions/cses/introductory/1070_permutations.cpp)

## Try first

Separate the numbers by parity and examine the boundary.

## Reasoning

Within each parity block, consecutive values differ by two. For n >= 4, the last even number and first odd number also differ by more than one. n = 1 is trivial; direct inspection rules out 2 and 3.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Output incrementally when the construction does not require storing the permutation.

## Watch for

The checker accepts any valid permutation, not only the even-then-odd order.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
