# MissingNo.

[Original problem](https://atcoder.jp/contests/abc317/tasks/abc317_b) · [C++ solution](../../solutions/atcoder/implementation/abc317_b_missingno.cpp)

## Try first

Uniqueness rules out a missing endpoint, so the missing number lies inside the sorted range.

## Reasoning

Uniqueness rules out a missing endpoint, so the missing number lies inside the sorted range. It is the sole gap of two between adjacent remaining numbers.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
