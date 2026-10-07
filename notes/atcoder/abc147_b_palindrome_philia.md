# Palindrome-philia

[Original problem](https://atcoder.jp/contests/abc147/tasks/abc147_b) · [C++ solution](../../solutions/atcoder/implementation/abc147_b_palindrome_philia.cpp)

## Try first

Each unequal mirrored pair needs at least one change, and one change fixes that pair.

## Reasoning

Each unequal mirrored pair needs at least one change, and one change fixes that pair. Disjoint pairs can be fixed independently.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
