# Gray Code

[Original problem](https://cses.fi/problemset/task/2205/) · [C++ solution](../../solutions/cses/introductory/2205_gray_code.cpp)

## Try first

XOR each binary index with itself shifted one bit right.

## Reasoning

When a binary number increments, a suffix of bits flips. In value XOR (value >> 1), all but one of those flips cancel. Thus adjacent outputs differ in one bit. The transformation is invertible by recovering bits from the most significant downward, so every code appears once.

## Cost

- Time: **O(n * 2^n)**.
- Extra space: **O(1)**.

## C++ takeaway

Bit shifts and XOR operate on integers; emit bits explicitly to retain leading zeros.

## Watch for

All codes must have exactly n characters.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
