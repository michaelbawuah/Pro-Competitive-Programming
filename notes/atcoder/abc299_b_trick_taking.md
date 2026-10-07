# Trick Taking

[Original problem](https://atcoder.jp/contests/abc299/tasks/abc299_b) · [C++ solution](../../solutions/atcoder/implementation/abc299_b_trick_taking.cpp)

## Try first

First select the eligible color: T if present, otherwise player one color.

## Reasoning

First select the eligible color: T if present, otherwise player one color. Among eligible players, retain the index with greatest rank.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
