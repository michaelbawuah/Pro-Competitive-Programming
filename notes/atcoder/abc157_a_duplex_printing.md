# Duplex Printing

[Original problem](https://atcoder.jp/contests/abc157/tasks/abc157_a) · [C++ solution](../../solutions/atcoder/implementation/abc157_a_duplex_printing.cpp)

## Try first

A sheet holds two pages, so use ceiling division to include an unmatched final page.

## Reasoning

A sheet holds two pages, so use ceiling division to include an unmatched final page.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
