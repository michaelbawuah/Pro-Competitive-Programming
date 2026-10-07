# Treasure Chest

[Original problem](https://atcoder.jp/contests/abc299/tasks/abc299_a) · [C++ solution](../../solutions/atcoder/implementation/abc299_a_treasure_chest.cpp)

## Try first

Find the first and last bar and the unique star.

## Reasoning

Find the first and last bar and the unique star. The star is inside exactly when its position lies strictly between the two bar positions.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
