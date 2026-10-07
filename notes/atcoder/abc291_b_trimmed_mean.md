# Trimmed Mean

[Original problem](https://atcoder.jp/contests/abc291/tasks/abc291_b) · [C++ solution](../../solutions/atcoder/implementation/abc291_b_trimmed_mean.cpp)

## Try first

Sorting places the N smallest and N largest grades at the ends.

## Reasoning

Sorting places the N smallest and N largest grades at the ends. Sum exactly the middle 3N entries and divide in floating point.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
