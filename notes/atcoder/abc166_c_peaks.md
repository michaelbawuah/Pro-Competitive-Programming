# Peaks

[Original problem](https://atcoder.jp/contests/abc166/tasks/abc166_c) · [C++ solution](../../solutions/atcoder/graphs/abc166_c_peaks.cpp)

## Try first

Each road disqualifies an endpoint whose height is not strictly greater than the other.

## Reasoning

Each road disqualifies an endpoint whose height is not strictly greater than the other. Mark disqualifications independently for both endpoints; isolated observatories remain good.

## Cost

- Time: **O(n+m)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
