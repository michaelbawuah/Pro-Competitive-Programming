# Counting Passes

[Original problem](https://atcoder.jp/contests/abc330/tasks/abc330_a) · [C++ solution](../../solutions/atcoder/implementation/abc330_a_counting_passes.cpp)

## Try first

A person passes exactly when their score is at least the threshold.

## Reasoning

A person passes exactly when their score is at least the threshold. Count qualifying scores, including equality.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
