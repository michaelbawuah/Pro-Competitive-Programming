# Perfect String

[Original problem](https://atcoder.jp/contests/abc249/tasks/abc249_b) · [C++ solution](../../solutions/atcoder/implementation/abc249_b_perfect_string.cpp)

## Try first

Track the presence of both letter cases and count distinct characters.

## Reasoning

Track the presence of both letter cases and count distinct characters. All requirements hold exactly when both cases occur and the distinct count equals the string length.

## Cost

- Time: **O(n log 52)**.
- Extra space: **O(n)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
