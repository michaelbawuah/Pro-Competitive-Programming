# Minimize Ordering

[Original problem](https://atcoder.jp/contests/abc242/tasks/abc242_b) · [C++ solution](../../solutions/atcoder/implementation/abc242_b_minimize_ordering.cpp)

## Try first

At every position, choosing the smallest unused letter minimizes the first possible difference.

## Reasoning

At every position, choosing the smallest unused letter minimizes the first possible difference. Sorting implements these choices for the whole string.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
