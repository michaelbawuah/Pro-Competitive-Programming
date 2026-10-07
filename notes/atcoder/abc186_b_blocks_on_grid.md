# Blocks on Grid

[Original problem](https://atcoder.jp/contests/abc186/tasks/abc186_b) · [C++ solution](../../solutions/atcoder/implementation/abc186_b_blocks_on_grid.cpp)

## Try first

Removal cannot raise the smallest pile.

## Reasoning

Removal cannot raise the smallest pile. Keeping every square at that minimum removes the fewest blocks.

## Cost

- Time: **O(H W)**.
- Extra space: **O(1)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
