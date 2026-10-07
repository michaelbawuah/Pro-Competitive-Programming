# Subarray Sums I

[Original problem](https://cses.fi/problemset/task/1660/) · [C++ solution](../../solutions/cses/sliding_window/1660_subarray_sums_i.cpp)

## Try first

Positive values make a window sum increase when extended and decrease when shortened.

## Reasoning

Positive values make a window sum increase when extended and decrease when shortened. For each right endpoint, discard starts while the sum is too large; at most one remaining start can achieve the target.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
