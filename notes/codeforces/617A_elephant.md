# Elephant

[Original problem](https://codeforces.com/problemset/problem/617/A) · [C++ solution](../../solutions/codeforces/mathematics/617A_elephant.cpp)

## Try first

Each step advances at most five positions.

## Reasoning

Any route needs at least ceil(distance/5) steps because each step covers at most five units. Take as many five-unit steps as possible, then one step for the remaining one to four units if necessary. This construction attains the lower bound.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

For positive integers, (x+d-1)/d computes ceiling division without floating point.

## Watch for

An exact multiple of five needs no extra step. Round up only when a remainder exists.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
