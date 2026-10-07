# Dynamic Range Sum Queries

[Original problem](https://cses.fi/problemset/task/1648/) · [C++ solution](../../solutions/cses/range_queries/1648_dynamic_range_sum_queries.cpp)

## Try first

Store sums of power-of-two blocks, then update only blocks containing the changed index.

## Reasoning

Fenwick node i stores the block ending at i of length its lowest set bit. Prefix queries remove disjoint final blocks until reaching zero. Updating visits exactly the ancestor blocks containing an index. A range is the difference of two prefixes.

## Cost

- Time: **O((n + q) log n)**.
- Extra space: **O(n)**.

## C++ takeaway

index & -index extracts the lowest set bit for a positive signed index within these constraints.

## Watch for

The update assigns a value; convert it into a delta from the previous value. Never call add at index zero.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
