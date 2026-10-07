# Minimize Abs 1

[Original problem](https://atcoder.jp/contests/abc330/tasks/abc330_b) · [C++ solution](../../solutions/atcoder/implementation/abc330_b_minimize_abs_1.cpp)

## Try first

An input inside the interval is already distance zero.

## Reasoning

An input inside the interval is already distance zero. Below the interval the nearest point is L, and above it the nearest is R; clamping implements all three cases.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

std::clamp(value,low,high) returns the closest endpoint outside the interval and the value itself inside it. Its precondition is low<=high.

## Watch for

Equality with either endpoint is already valid and must not move the value outside the interval.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
