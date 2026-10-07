# Palindrome with leading zeros

[Original problem](https://atcoder.jp/contests/abc198/tasks/abc198_b) · [C++ solution](../../solutions/atcoder/implementation/abc198_b_palindrome_with_leading_zeros.cpp)

## Try first

Leading added zeros can pair only with existing trailing zeros.

## Reasoning

Leading added zeros can pair only with existing trailing zeros. Remove those trailing zeros and test whether the remaining core is a palindrome.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
