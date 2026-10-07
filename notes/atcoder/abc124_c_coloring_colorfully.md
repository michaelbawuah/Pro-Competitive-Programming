# Coloring Colorfully

[Original problem](https://atcoder.jp/contests/abc124/tasks/abc124_c) · [C++ solution](../../solutions/atcoder/implementation/abc124_c_coloring_colorfully.cpp)

## Try first

There are only two alternating colorings, determined by the first color.

## Reasoning

There are only two alternating colorings, determined by the first color. Count mismatches against one; every position matches exactly one of the two patterns.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::string indexing is zero-based. Use a size-compatible loop bound and ensure a complete substring fits before reading adjacent characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
