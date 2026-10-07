# Bounding

[Original problem](https://atcoder.jp/contests/abc130/tasks/abc130_b) · [C++ solution](../../solutions/atcoder/implementation/abc130_b_bounding.cpp)

## Try first

The initial bounce is at zero.

## Reasoning

The initial bounce is at zero. Accumulate each positive displacement to obtain every later bounce coordinate, counting coordinates at most X.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
