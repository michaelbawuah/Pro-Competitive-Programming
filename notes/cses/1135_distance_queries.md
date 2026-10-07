# Distance Queries

[Original problem](https://cses.fi/problemset/task/1135/) · [C++ solution](../../solutions/cses/trees/1135_distance_queries.cpp)

## Try first

Precompute power-of-two ancestors.

## Reasoning

Precompute power-of-two ancestors. Equalize query depths, then lift both vertices together without crossing their lowest common ancestor. The path length is the two original depths minus twice that ancestor depth.

## Cost

- Time: **O((n+q) log n)**.
- Extra space: **O(n log n)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
