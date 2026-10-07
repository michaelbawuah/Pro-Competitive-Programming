# Subarray Divisibility

[Original problem](https://cses.fi/problemset/task/1662/) · [C++ solution](../../solutions/cses/prefix_sums/1662_subarray_divisibility.cpp)

## Try first

A subarray sum is divisible by n exactly when its two prefix sums have equal remainders.

## Reasoning

A subarray sum is divisible by n exactly when its two prefix sums have equal remainders. Count previous prefixes by normalized remainder, including the empty prefix.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
