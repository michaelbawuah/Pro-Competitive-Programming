# Chord

[Original problem](https://atcoder.jp/contests/abc312/tasks/abc312_a) · [C++ solution](../../solutions/atcoder/implementation/abc312_a_chord.cpp)

## Try first

Store the seven allowed strings exactly as listed and test the input for membership.

## Reasoning

Store the seven allowed strings exactly as listed and test the input for membership.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
