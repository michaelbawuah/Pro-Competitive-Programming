# Longest Segment

[Original problem](https://atcoder.jp/contests/abc234/tasks/abc234_b) · [C++ solution](../../solutions/atcoder/implementation/abc234_b_longest_segment.cpp)

## Try first

Compare all unordered pairs using squared Euclidean distance.

## Reasoning

Compare all unordered pairs using squared Euclidean distance. Squaring preserves order for nonnegative distances; take a single square root of the maximum.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
