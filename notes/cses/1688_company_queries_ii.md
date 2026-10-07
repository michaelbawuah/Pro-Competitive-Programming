# Company Queries II

[Original problem](https://cses.fi/problemset/task/1688/) · [C++ solution](../../solutions/cses/trees/1688_company_queries_ii.cpp)

## Try first

Boss identifiers are smaller than employee identifiers, allowing depths to be computed during input.

## Reasoning

Boss identifiers are smaller than employee identifiers, allowing depths to be computed during input. Binary lifting equalizes depths and then moves both employees up while their candidate ancestors differ; the next parent is their lowest common boss.

## Cost

- Time: **O((n+q) log n)**.
- Extra space: **O(n log n)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
