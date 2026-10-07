# Static Range Minimum Queries

[Original problem](https://cses.fi/problemset/task/1647/) · [C++ solution](../../solutions/cses/sparse_table/1647_static_range_minimum_queries.cpp)

## Try first

Precompute minima of every power-of-two interval.

## Reasoning

Precompute minima of every power-of-two interval. A query is covered by two intervals of the largest fitting power; they may overlap because taking a minimum twice does not change it.

## Cost

- Time: **O(n log n+q)**.
- Extra space: **O(n log n)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
