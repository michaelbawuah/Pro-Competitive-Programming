# Large Digits

[Original problem](https://atcoder.jp/contests/abc187/tasks/abc187_a) · [C++ solution](../../solutions/atcoder/implementation/abc187_a_large_digits.cpp)

## Try first

Compute each decimal digit sum independently and select the larger sum.

## Reasoning

Compute each decimal digit sum independently and select the larger sum.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
