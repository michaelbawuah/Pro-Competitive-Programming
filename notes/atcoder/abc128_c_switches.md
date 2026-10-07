# Switches

[Original problem](https://atcoder.jp/contests/abc128/tasks/abc128_c) · [C++ solution](../../solutions/atcoder/bitmasks/abc128_c_switches.cpp)

## Try first

Encode each switch assignment as a bit mask.

## Reasoning

Encode each switch assignment as a bit mask. For each bulb, count on bits among its connected switches and compare the parity; accept exactly assignments satisfying every bulb.

## Cost

- Time: **O(2^N M N)**.
- Extra space: **O(M)**.

## C++ takeaway

A bit mask encodes a small subset. Parenthesize shift-and-mask expressions, and verify the bit count fits the integer type before allocating 2^n states.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
