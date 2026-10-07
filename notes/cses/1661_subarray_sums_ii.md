# Subarray Sums II

[Original problem](https://cses.fi/problemset/task/1661/) · [C++ solution](../../solutions/cses/sorting_searching/1661_subarray_sums_ii.cpp)

## Try first

A subarray sum is the difference of two prefix sums.

## Reasoning

At each endpoint, a previous prefix equal to prefix - target creates exactly one matching subarray. Store the count of every previous prefix, including the empty prefix zero. Query before inserting the current prefix so empty subarrays are excluded.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Both prefix sums and the answer use long long. Repeated prefix sums require frequencies, not a set.

## Watch for

Negative elements invalidate the usual positive-only two-pointer approach.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
