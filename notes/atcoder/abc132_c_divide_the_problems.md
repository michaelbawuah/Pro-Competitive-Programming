# Divide the Problems

[Original problem](https://atcoder.jp/contests/abc132/tasks/abc132_c) · [C++ solution](../../solutions/atcoder/sorting/abc132_c_divide_the_problems.cpp)

## Try first

After sorting, exactly half are below K when K is strictly greater than the lower middle value and at most the upper middle value.

## Reasoning

After sorting, exactly half are below K when K is strictly greater than the lower middle value and at most the upper middle value. The number of integer thresholds is their difference.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
