# Guidebook

[Original problem](https://atcoder.jp/contests/abc128/tasks/abc128_b) · [C++ solution](../../solutions/atcoder/implementation/abc128_b_guidebook.cpp)

## Try first

Sort by city ascending and negative score ascending, which is score descending.

## Reasoning

Sort by city ascending and negative score ascending, which is score descending. Carry original identifiers alongside the sort keys for the requested output.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
