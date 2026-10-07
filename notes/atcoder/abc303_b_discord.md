# Discord

[Original problem](https://atcoder.jp/contests/abc303/tasks/abc303_b) · [C++ solution](../../solutions/atcoder/implementation/abc303_b_discord.cpp)

## Try first

Mark every neighboring pair in every photo, symmetrically.

## Reasoning

Mark every neighboring pair in every photo, symmetrically. Count unordered pairs that remain unmarked after processing all photos.

## Cost

- Time: **O(NM+N^2)**.
- Extra space: **O(N^2)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
