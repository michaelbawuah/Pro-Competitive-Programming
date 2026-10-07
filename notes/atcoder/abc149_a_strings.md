# Strings

[Original problem](https://atcoder.jp/contests/abc149/tasks/abc149_a) · [C++ solution](../../solutions/atcoder/implementation/abc149_a_strings.cpp)

## Try first

Print T first and S second with no separator, matching the requested concatenation order..

## Reasoning

Print T first and S second with no separator, matching the requested concatenation order.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
