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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
