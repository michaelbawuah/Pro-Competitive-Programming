# Multiple of 9

[Original problem](https://atcoder.jp/contests/abc176/tasks/abc176_b) · [C++ solution](../../solutions/atcoder/implementation/abc176_b_multiple_of_9.cpp)

## Try first

Divisibility by nine depends only on the digit sum.

## Reasoning

Divisibility by nine depends only on the digit sum. Read the enormous number as text instead of a built-in integer.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
