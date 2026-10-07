# Minimize Ordering

[Original problem](https://atcoder.jp/contests/abc242/tasks/abc242_b) · [C++ solution](../../solutions/atcoder/implementation/abc242_b_minimize_ordering.cpp)

## Try first

At every position, choosing the smallest unused letter minimizes the first possible difference.

## Reasoning

At every position, choosing the smallest unused letter minimizes the first possible difference. Sorting implements these choices for the whole string.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
