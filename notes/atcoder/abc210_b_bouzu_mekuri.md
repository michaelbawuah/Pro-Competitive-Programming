# Bouzu Mekuri

[Original problem](https://atcoder.jp/contests/abc210/tasks/abc210_b) · [C++ solution](../../solutions/atcoder/implementation/abc210_b_bouzu_mekuri.cpp)

## Try first

The game ends at the first bad card.

## Reasoning

The game ends at the first bad card. Its zero-based index parity identifies the player drawing it, who loses.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

String find() returns a zero-based position or string::npos. Test the sentinel before adding one or converting the position to a signed output type.

## Watch for

Check the not-found case and whether the requested occurrence is the first or the last.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
