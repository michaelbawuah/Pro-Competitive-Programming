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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
