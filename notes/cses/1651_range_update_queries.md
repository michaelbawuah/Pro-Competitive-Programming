# Range Update Queries

[Original problem](https://cses.fi/problemset/task/1651/) · [C++ solution](../../solutions/cses/range_queries/1651_range_update_queries.cpp)

## Try first

A range addition becomes two point changes in a difference array.

## Reasoning

Track only accumulated updates. Adding delta on [l,r] adds delta at difference index l and subtracts delta at r+1. The prefix sum through k therefore includes delta exactly when l<=k<=r. A Fenwick tree supports these point changes and prefix sums in logarithmic time. Add the original value to recover the current value at k.

## Cost

- Time: **O(n + q log n)**.
- Extra space: **O(n)**.

## C++ takeaway

A lambda can capture the Fenwick storage by reference while taking each update index by value.

## Watch for

Use long long for accumulated additions. An update ending at n requires no stored cancellation beyond the array.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
