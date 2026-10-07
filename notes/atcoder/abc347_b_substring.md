# Substring

[Original problem](https://atcoder.jp/contests/abc347/tasks/abc347_b) · [C++ solution](../../solutions/atcoder/implementation/abc347_b_substring.cpp)

## Try first

Each nonempty substring is defined by its start and positive length.

## Reasoning

Each nonempty substring is defined by its start and positive length. Insert all such substrings into a set to collapse identical contents from different positions.

## Cost

- Time: **O(n^3 log n)**.
- Extra space: **O(n^3)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
