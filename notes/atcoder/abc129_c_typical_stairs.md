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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
