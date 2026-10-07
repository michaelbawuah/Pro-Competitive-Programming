# HonestOrUnkind2

[Original problem](https://atcoder.jp/contests/abc147/tasks/abc147_c) · [C++ solution](../../solutions/atcoder/bitmasks/abc147_c_honestorunkind2.cpp)

## Try first

Enumerate the set of honest people.

## Reasoning

Enumerate the set of honest people. Only their testimonies impose restrictions, and each must agree with the chosen set. Among consistent assignments maximize the honest count.

## Cost

- Time: **O(2^n n^2)**.
- Extra space: **O(n^2)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
