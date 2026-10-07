# Forest Queries

[Original problem](https://cses.fi/problemset/task/1652/) · [C++ solution](../../solutions/cses/prefix_sums/1652_forest_queries.cpp)

## Try first

Build a two-dimensional prefix sum.

## Reasoning

Build a two-dimensional prefix sum. Each rectangle query subtracts the strips above and left, then adds their doubly subtracted overlap; the zero border handles rectangles touching an edge.

## Cost

- Time: **O(n^2+q)**.
- Extra space: **O(n^2)**.

## C++ takeaway

std::string indexing is zero-based. Use a size-compatible loop bound and ensure a complete substring fits before reading adjacent characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
