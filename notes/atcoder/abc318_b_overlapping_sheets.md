# Overlapping sheets

[Original problem](https://atcoder.jp/contests/abc318/tasks/abc318_b) · [C++ solution](../../solutions/atcoder/implementation/abc318_b_overlapping_sheets.cpp)

## Try first

All boundaries have integer coordinates, so decompose the plane into unit squares.

## Reasoning

All boundaries have integer coordinates, so decompose the plane into unit squares. Mark every unit square covered by any sheet and count marked squares once; shared boundaries have zero area.

## Cost

- Time: **O(N*100^2)**.
- Extra space: **O(100^2)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
