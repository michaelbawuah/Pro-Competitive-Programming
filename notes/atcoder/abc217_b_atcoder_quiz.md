# AtCoder Quiz

[Original problem](https://atcoder.jp/contests/abc217/tasks/abc217_b) · [C++ solution](../../solutions/atcoder/implementation/abc217_b_atcoder_quiz.cpp)

## Try first

Start with the four possible labels and remove the three distinct supplied labels.

## Reasoning

Start with the four possible labels and remove the three distinct supplied labels. Exactly one remains.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A set keeps distinct keys in sorted order. insert() reports whether a key was new; size() counts distinct keys rather than the number of insertion attempts.

## Watch for

Decide whether the problem asks for distinct values or occurrences before choosing a set.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
