# Distinct Strings

[Original problem](https://atcoder.jp/contests/abc225/tasks/abc225_a) · [C++ solution](../../solutions/atcoder/implementation/abc225_a_distinct_strings.cpp)

## Try first

Sorting starts at the smallest permutation.

## Reasoning

Sorting starts at the smallest permutation. Each successful next_permutation advances to a distinct arrangement, even when letters repeat.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
