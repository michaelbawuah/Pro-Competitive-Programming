# Permutation Check

[Original problem](https://atcoder.jp/contests/abc205/tasks/abc205_b) · [C++ solution](../../solutions/atcoder/implementation/abc205_b_permutation_check.cpp)

## Try first

There are N entries drawn from N permitted values.

## Reasoning

There are N entries drawn from N permitted values. They form a permutation exactly when none is repeated.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
