# ATCoder

[Original problem](https://atcoder.jp/contests/abc122/tasks/abc122_b) · [C++ solution](../../solutions/atcoder/implementation/abc122_b_atcoder.cpp)

## Try first

Maintain the length of the valid ACGT run ending at the current character.

## Reasoning

Maintain the length of the valid ACGT run ending at the current character. A disallowed character resets that suffix length to zero; the maximum covers all substrings.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
