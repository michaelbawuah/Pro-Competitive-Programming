# String Palindrome

[Original problem](https://atcoder.jp/contests/abc159/tasks/abc159_b) · [C++ solution](../../solutions/atcoder/implementation/abc159_b_string_palindrome.cpp)

## Try first

Check the whole string and each half excluding the central character.

## Reasoning

Check the whole string and each half excluding the central character. All three palindrome conditions are independently required.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
