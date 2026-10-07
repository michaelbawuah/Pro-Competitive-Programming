# Probably English

[Original problem](https://atcoder.jp/contests/abc295/tasks/abc295_a) · [C++ solution](../../solutions/atcoder/implementation/abc295_a_probably_english.cpp)

## Try first

Check each complete input word for membership in the five-word target set.

## Reasoning

Check each complete input word for membership in the five-word target set. Any exact match is enough; substrings do not qualify.

## Cost

- Time: **O(total characters)**.
- Extra space: **O(1)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
