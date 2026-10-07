# Counting Divisors

[Original problem](https://cses.fi/problemset/task/1713/) · [C++ solution](../../solutions/cses/mathematics/1713_counting_divisors.cpp)

## Try first

Instead of factoring each query, let each divisor visit all its multiples.

## Reasoning

For each positive d up to the largest query, increment the count of d, 2d, 3d, and so on. An integer x is visited once for each positive divisor d of x, so its final count is exact. The total visits are M/1+M/2+...+M/M, bounded by O(M log M). All queries then become direct lookups.

## Cost

- Time: **O(M log M + n), M = max input**.
- Extra space: **O(M + n)**.

## C++ takeaway

Allocate preprocessing storage using the largest input instead of an unexplained fixed array size.

## Watch for

The number one has one divisor. A perfect square's square root is counted once by this sieve.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
