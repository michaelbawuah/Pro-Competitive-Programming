# Typical Stairs

[Original problem](https://atcoder.jp/contests/abc129/tasks/abc129_c) · [C++ solution](../../solutions/atcoder/dynamic_programming/abc129_c_typical_stairs.cpp)

## Try first

A safe step can be reached from the previous step or from two steps below.

## Reasoning

A safe step can be reached from the previous step or from two steps below. Add those disjoint possibilities; broken steps contribute zero, and the ground has one empty path.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
