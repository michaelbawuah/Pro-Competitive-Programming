# The Middle Day

[Original problem](https://atcoder.jp/contests/abc315/tasks/abc315_b) · [C++ solution](../../solutions/atcoder/implementation/abc315_b_the_middle_day.cpp)

## Try first

The middle day has one-based annual index (total+1)/2.

## Reasoning

The middle day has one-based annual index (total+1)/2. Subtract whole months until that index lies within the current month, leaving its one-based day number.

## Cost

- Time: **O(M)**.
- Extra space: **O(M)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
