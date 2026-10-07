# Two Sets II

[Original problem](https://cses.fi/problemset/task/1093/) · [C++ solution](../../solutions/cses/dynamic_programming/1093_two_sets_ii.cpp)

## Try first

Count only the half of each partition that does not contain n.

## Reasoning

An odd total cannot be split equally. Otherwise, every unordered partition has exactly one part excluding n, and that part totals half the full sum. Count subsets of 1 through n-1 with this target using descending-sum 0/1 DP. This gives a bijection with valid unordered partitions and avoids modular division by two.

## Cost

- Time: **O(n^3)**.
- Extra space: **O(n^2)**.

## C++ takeaway

A combinatorial symmetry break can remove the need for a modular inverse.

## Watch for

The loop deliberately excludes n. Counting all target subsets would count each partition twice.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
