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

setprecision controls significant digits unless fixed is enabled. Compute with floating-point operands before division, then print enough digits for the stated error tolerance.

## Watch for

Avoid integer division before conversion, and treat exact-format decimal tasks differently from tolerance-based outputs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
