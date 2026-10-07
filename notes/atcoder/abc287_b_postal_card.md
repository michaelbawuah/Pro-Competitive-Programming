# Postal Card

[Original problem](https://atcoder.jp/contests/abc287/tasks/abc287_b) · [C++ solution](../../solutions/atcoder/implementation/abc287_b_postal_card.cpp)

## Try first

Store the allowed three-character suffixes in a set.

## Reasoning

Store the allowed three-character suffixes in a set. Test each six-character string once, so repeated allowed suffixes never multiply the count.

## Cost

- Time: **O((N+M) log M)**.
- Extra space: **O(N+M)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
