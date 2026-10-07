# Algae

[Original problem](https://atcoder.jp/contests/abc127/tasks/abc127_b) · [C++ solution](../../solutions/atcoder/implementation/abc127_b_algae.cpp)

## Try first

Apply the recurrence ten times, printing each newly computed yearly weight rather than the initial value.

## Reasoning

Apply the recurrence ten times, printing each newly computed yearly weight rather than the initial value.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
