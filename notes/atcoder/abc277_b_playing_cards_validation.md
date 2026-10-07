# Playing Cards Validation

[Original problem](https://atcoder.jp/contests/abc277/tasks/abc277_b) · [C++ solution](../../solutions/atcoder/implementation/abc277_b_playing_cards_validation.cpp)

## Try first

Validate each character against its allowed alphabet and require every complete card code to be distinct.

## Reasoning

Validate each character against its allowed alphabet and require every complete card code to be distinct. A set detects duplicates independently of suit and rank validity.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
