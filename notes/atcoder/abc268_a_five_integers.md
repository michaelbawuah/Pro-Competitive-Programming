# Five Integers

[Original problem](https://atcoder.jp/contests/abc268/tasks/abc268_a) · [C++ solution](../../solutions/atcoder/implementation/abc268_a_five_integers.cpp)

## Try first

A set retains one representative of each integer.

## Reasoning

A set retains one representative of each integer. Insert the five inputs and report its size.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
