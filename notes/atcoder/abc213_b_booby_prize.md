# Booby Prize

[Original problem](https://atcoder.jp/contests/abc213/tasks/abc213_b) · [C++ solution](../../solutions/atcoder/implementation/abc213_b_booby_prize.cpp)

## Try first

Smaller scores rank higher, so the second-lowest rank has the second-largest score.

## Reasoning

Smaller scores rank higher, so the second-lowest rank has the second-largest score. Sort scores descending while retaining original player numbers.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
