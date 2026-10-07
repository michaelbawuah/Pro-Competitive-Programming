# Slot

[Original problem](https://atcoder.jp/contests/abc189/tasks/abc189_a) · [C++ solution](../../solutions/atcoder/implementation/abc189_a_slot.cpp)

## Try first

Three equal symbols require equality of both adjacent pairs.

## Reasoning

Three equal symbols require equality of both adjacent pairs.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
