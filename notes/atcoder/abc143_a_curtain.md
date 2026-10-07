# Curtain

[Original problem](https://atcoder.jp/contests/abc143/tasks/abc143_a) · [C++ solution](../../solutions/atcoder/implementation/abc143_a_curtain.cpp)

## Try first

The two curtains cover up to 2B of the window width.

## Reasoning

The two curtains cover up to 2B of the window width. The uncovered width cannot be negative.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
