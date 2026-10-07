# At Most 3 (Judge ver.)

[Original problem](https://atcoder.jp/contests/abc251/tasks/abc251_b) · [C++ solution](../../solutions/atcoder/implementation/abc251_b_at_most_3_judge_ver.cpp)

## Try first

Enumerate every subset of one, two, or three distinct indices in increasing order.

## Reasoning

Enumerate every subset of one, two, or three distinct indices in increasing order. Mark its positive sum when within the limit; marking removes duplicate sums from different subsets.

## Cost

- Time: **O(n^3+W)**.
- Extra space: **O(n+W)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
