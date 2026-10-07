# Coloring Matrix

[Original problem](https://atcoder.jp/contests/abc298/tasks/abc298_b) · [C++ solution](../../solutions/atcoder/implementation/abc298_b_coloring_matrix.cpp)

## Try first

A square has four orientations under quarter-turn rotations.

## Reasoning

A square has four orientations under quarter-turn rotations. For each orientation, require every one in A to coincide with a one in B; zeros in A impose no restriction. Rotate through a separate matrix.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
