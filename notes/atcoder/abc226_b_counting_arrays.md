# Counting Arrays

[Original problem](https://atcoder.jp/contests/abc226/tasks/abc226_b) · [C++ solution](../../solutions/atcoder/implementation/abc226_b_counting_arrays.cpp)

## Try first

Store entire sequences as ordered-set keys.

## Reasoning

Store entire sequences as ordered-set keys. Vector comparison includes both element values and length, so identical sequences coalesce and different ones remain.

## Cost

- Time: **O(L log n), L = total input length**.
- Extra space: **O(L)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
