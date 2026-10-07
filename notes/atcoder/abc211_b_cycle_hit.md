# Cycle Hit

[Original problem](https://atcoder.jp/contests/abc211/tasks/abc211_b) · [C++ solution](../../solutions/atcoder/implementation/abc211_b_cycle_hit.cpp)

## Try first

All inputs belong to the four allowed labels, so four distinct entries imply exactly one of each.

## Reasoning

All inputs belong to the four allowed labels, so four distinct entries imply exactly one of each.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
