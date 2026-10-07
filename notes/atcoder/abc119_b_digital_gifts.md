# Digital Gifts

[Original problem](https://atcoder.jp/contests/abc119/tasks/abc119_b) · [C++ solution](../../solutions/atcoder/implementation/abc119_b_digital_gifts.cpp)

## Try first

Convert each gift to yen with the fixed rate in the statement, then sum those amounts.

## Reasoning

Convert each gift to yen with the fixed rate in the statement, then sum those amounts. Preserve fractional yen in a floating-point total.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
