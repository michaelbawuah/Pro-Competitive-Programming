# Kagami Mochi

[Original problem](https://atcoder.jp/contests/abc085/tasks/abc085_b) · [C++ solution](../../solutions/atcoder/implementation/abc085_b_kagami_mochi.cpp)

## Try first

Strictly decreasing diameters allow at most one mochi of each diameter.

## Reasoning

Strictly decreasing diameters allow at most one mochi of each diameter. Sorting all distinct diameters provides a stack achieving that upper bound.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
