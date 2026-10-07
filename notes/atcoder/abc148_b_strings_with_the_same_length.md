# Strings with the Same Length

[Original problem](https://atcoder.jp/contests/abc148/tasks/abc148_b) · [C++ solution](../../solutions/atcoder/implementation/abc148_b_strings_with_the_same_length.cpp)

## Try first

For each index print the character from S followed by the corresponding character from T, preserving both orders..

## Reasoning

For each index print the character from S followed by the corresponding character from T, preserving both orders.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
