# Spot the Difference

[Original problem](https://atcoder.jp/contests/abc351/tasks/abc351_b) · [C++ solution](../../solutions/atcoder/implementation/abc351_b_spot_the_difference.cpp)

## Try first

Compare corresponding cells in the two grids.

## Reasoning

Compare corresponding cells in the two grids. The guaranteed single mismatch gives the unique row and column, converted to one-based numbering.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
