# Maximum Subarray Sum II

[Original problem](https://cses.fi/problemset/task/1644/) · [C++ solution](../../solutions/cses/prefix_sums/1644_maximum_subarray_sum_ii.cpp)

## Try first

A subarray ending at r may start at prefix indices r-b through r-a.

## Reasoning

A subarray ending at r may start at prefix indices r-b through r-a. Maintain exactly those prefix sums in a multiset and subtract the minimum from prefix[r]. Erase one occurrence so duplicate prefix values remain correctly represented.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

A multiset retains duplicate values. Erase an iterator to remove one occurrence; erase(value) removes every equal occurrence.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
