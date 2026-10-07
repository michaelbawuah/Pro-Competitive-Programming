# Two Knights

[Original problem](https://cses.fi/problemset/task/1072/) · [C++ solution](../../solutions/cses/introductory/1072_two_knights.cpp)

## Try first

Count all pairs of squares, then subtract attacking pairs.

## Reasoning

There are choose(k^2,2) unordered placements. Every attacking pair is a diagonal of a 2 by 3 or 3 by 2 rectangle. Each rectangle contributes two attacks, giving 4(k-1)(k-2) in total for k >= 3.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products of four board dimensions.

## Watch for

Do not count both orderings of the same pair of knights.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
