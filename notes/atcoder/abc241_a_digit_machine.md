# Digit Machine

[Original problem](https://atcoder.jp/contests/abc241/tasks/abc241_a) · [C++ solution](../../solutions/atcoder/implementation/abc241_a_digit_machine.cpp)

## Try first

The current display indexes the next display.

## Reasoning

The current display indexes the next display. Apply this transition three times starting at zero.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

A vector initializes its sized elements before use and provides zero-based indexing. Keep an input count separate from indices when the same count is needed later.

## Watch for

Translate one-based input indices once and keep every access within the allocated range.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
