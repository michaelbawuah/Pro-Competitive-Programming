# Distinct or Not

[Original problem](https://atcoder.jp/contests/abc154/tasks/abc154_c) · [C++ solution](../../solutions/atcoder/implementation/abc154_c_distinct_or_not.cpp)

## Try first

Sorting makes every duplicate pair adjacent.

## Reasoning

Sorting makes every duplicate pair adjacent. The sequence is pairwise distinct exactly when no adjacent equality remains.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
