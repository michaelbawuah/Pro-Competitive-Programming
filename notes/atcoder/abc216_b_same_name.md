# Same Name

[Original problem](https://atcoder.jp/contests/abc216/tasks/abc216_b) · [C++ solution](../../solutions/atcoder/implementation/abc216_b_same_name.cpp)

## Try first

Use the ordered pair of names as the identity key.

## Reasoning

Use the ordered pair of names as the identity key. A failed insertion detects a previous person with both matching names.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
