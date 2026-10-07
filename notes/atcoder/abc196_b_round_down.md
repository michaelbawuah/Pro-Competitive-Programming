# Round Down

[Original problem](https://atcoder.jp/contests/abc196/tasks/abc196_b) · [C++ solution](../../solutions/atcoder/implementation/abc196_b_round_down.cpp)

## Try first

For a nonnegative decimal, flooring removes the decimal point and everything after it.

## Reasoning

For a nonnegative decimal, flooring removes the decimal point and everything after it. String processing preserves arbitrarily many integer digits.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
