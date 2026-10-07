# Election

[Original problem](https://atcoder.jp/contests/abc231/tasks/abc231_b) · [C++ solution](../../solutions/atcoder/implementation/abc231_b_election.cpp)

## Try first

Count every candidate name, then select the greatest frequency.

## Reasoning

Count every candidate name, then select the greatest frequency. The promised unique maximum removes any tie-breaking requirement.

## Cost

- Time: **O(n L log n)**.
- Extra space: **O(n L)**.

## C++ takeaway

A map associates each key with a value. operator[] inserts an absent key, while find() checks membership without insertion and at() requires the key to exist.

## Watch for

Distinguish a missing key from a stored zero, and count repeated inputs when multiplicity matters.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
