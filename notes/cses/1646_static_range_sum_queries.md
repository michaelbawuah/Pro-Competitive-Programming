# Static Range Sum Queries

[Original problem](https://cses.fi/problemset/task/1646/) · [C++ solution](../../solutions/cses/range_queries/1646_static_range_sum_queries.cpp)

## Try first

Precompute the sum before every boundary.

## Reasoning

prefix[i] is the sum of the first i elements. Subtracting prefix[left - 1] from prefix[right] cancels exactly the elements preceding the requested inclusive interval.

## Cost

- Time: **O(n + q)**.
- Extra space: **O(n)**.

## C++ takeaway

The extra zero entry removes the need for a special case at the first element.

## Watch for

A range sum can exceed 32 bits even when each array element fits.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
