# Mex

[Original problem](https://atcoder.jp/contests/abc245/tasks/abc245_b) · [C++ solution](../../solutions/atcoder/implementation/abc245_b_mex.cpp)

## Try first

Mark every present value, then scan from zero for the first unmarked value.

## Reasoning

Mark every present value, then scan from zero for the first unmarked value. All smaller nonnegative integers have been seen, so this is the minimum excluded value.

## Cost

- Time: **O(n+2001)**.
- Extra space: **O(2001)**.

## C++ takeaway

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
