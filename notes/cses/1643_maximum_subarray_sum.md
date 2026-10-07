# Maximum Subarray Sum

[Original problem](https://cses.fi/problemset/task/1643/) · [C++ solution](../../solutions/cses/sorting_searching/1643_maximum_subarray_sum.cpp)

## Try first

What is the best nonempty subarray ending exactly here?

## Reasoning

A nonempty subarray ending at the new value either starts there or extends the best subarray ending one position earlier. Taking the larger of those choices maintains the ending-here optimum. The maximum over all endpoints is the global answer.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize with the first input, not zero; long long protects sums.

## Watch for

All-negative arrays must return the least-negative element.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
