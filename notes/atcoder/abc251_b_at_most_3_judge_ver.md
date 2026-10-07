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

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
