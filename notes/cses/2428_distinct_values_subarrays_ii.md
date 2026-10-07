# Distinct Values Subarrays II

[Original problem](https://cses.fi/problemset/task/2428/) · [C++ solution](../../solutions/cses/sliding_window/2428_distinct_values_subarrays_ii.cpp)

## Try first

Keep the longest suffix ending at the current right endpoint with at most k distinct values.

## Reasoning

Keep the longest suffix ending at the current right endpoint with at most k distinct values. Every shorter suffix is also valid, so add its length; frequency counts support removing leftmost elements.

## Cost

- Time: **O(n log k)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
