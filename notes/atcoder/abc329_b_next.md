# Next

[Original problem](https://atcoder.jp/contests/abc329/tasks/abc329_b) · [C++ solution](../../solutions/atcoder/implementation/abc329_b_next.cpp)

## Try first

Distinct values in an ordered set appear sorted.

## Reasoning

Distinct values in an ordered set appear sorted. The first reverse element is the maximum; the next is the largest value strictly below it, whose existence is guaranteed.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
