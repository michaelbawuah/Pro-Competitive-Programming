# Strictly Superior

[Original problem](https://atcoder.jp/contests/abc310/tasks/abc310_b) · [C++ solution](../../solutions/atcoder/implementation/abc310_b_strictly_superior.cpp)

## Try first

Compare every ordered product pair.

## Reasoning

Compare every ordered product pair. The candidate superior product must cover all functions at no greater price, with a strict improvement in price or in number of functions. Under containment, a larger count means an extra function.

## Cost

- Time: **O(N^2 M)**.
- Extra space: **O(NM)**.

## C++ takeaway

A vector of vectors gives indexed rows with independently allocated storage. For simultaneous grid updates, read from the old grid and write into a separate result grid.

## Watch for

Check row and column dimensions separately and avoid reading an out-of-bounds neighbor.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
