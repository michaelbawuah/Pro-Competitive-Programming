# Second Best

[Original problem](https://atcoder.jp/contests/abc365/tasks/abc365_b) · [C++ solution](../../solutions/atcoder/implementation/abc365_b_second_best.cpp)

## Try first

Retain original indices with the values and sort descending.

## Reasoning

Retain original indices with the values and sort descending. Distinct values make the second sorted pair the unique second-largest element.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
