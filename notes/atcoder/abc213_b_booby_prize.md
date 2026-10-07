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

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
