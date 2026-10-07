# Cakes and Donuts

[Original problem](https://atcoder.jp/contests/abc105/tasks/abc105_b) · [C++ solution](../../solutions/atcoder/implementation/abc105_b_cakes_and_donuts.cpp)

## Try first

Fix the cake count and check whether the nonnegative remaining budget is divisible by seven.

## Reasoning

Fix the cake count and check whether the nonnegative remaining budget is divisible by seven. This enumerates every possible purchase.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
