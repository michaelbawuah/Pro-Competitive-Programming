# Streamline

[Original problem](https://atcoder.jp/contests/abc117/tasks/abc117_c) · [C++ solution](../../solutions/atcoder/greedy/abc117_c_streamline.cpp)

## Try first

One piece can cover a consecutive group at cost equal to its span.

## Reasoning

One piece can cover a consecutive group at cost equal to its span. Splitting into N groups removes N-1 gaps, so remove the largest gaps, equivalently sum the smallest M-N gaps.

## Cost

- Time: **O(M log M)**.
- Extra space: **O(M)**.

## C++ takeaway

std::sort rearranges a vector in place. Retain original indices before sorting when the output must preserve input order; use long long when accumulating costs.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
