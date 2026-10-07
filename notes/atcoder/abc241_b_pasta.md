# Pasta

[Original problem](https://atcoder.jp/contests/abc241/tasks/abc241_b) · [C++ solution](../../solutions/atcoder/implementation/abc241_b_pasta.cpp)

## Try first

Count available noodles by length and consume one matching noodle for each requested meal.

## Reasoning

Count available noodles by length and consume one matching noodle for each requested meal. Any negative remaining count proves a shortage.

## Cost

- Time: **O((N+M) log N)**.
- Extra space: **O(N)**.

## C++ takeaway

A map associates each key with a value. operator[] inserts an absent key, while find() checks membership without insertion and at() requires the key to exist.

## Watch for

Distinguish a missing key from a stored zero, and count repeated inputs when multiplicity matters.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
