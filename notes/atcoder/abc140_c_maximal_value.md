# Maximal Value

[Original problem](https://atcoder.jp/contests/abc140/tasks/abc140_c) · [C++ solution](../../solutions/atcoder/implementation/abc140_c_maximal_value.cpp)

## Try first

Each interior A value is bounded by its two adjacent B values; endpoints have one bound.

## Reasoning

Each interior A value is bounded by its two adjacent B values; endpoints have one bound. Taking each individual upper bound simultaneously is feasible and maximizes the sum.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
