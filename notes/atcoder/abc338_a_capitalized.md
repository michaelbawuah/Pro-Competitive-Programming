# Capitalized?

[Original problem](https://atcoder.jp/contests/abc338/tasks/abc338_a) · [C++ solution](../../solutions/atcoder/implementation/abc338_a_capitalized.cpp)

## Try first

Validate the first character against uppercase letters and every subsequent character against lowercase letters.

## Reasoning

Validate the first character against uppercase letters and every subsequent character against lowercase letters. A one-letter uppercase string satisfies the empty suffix condition.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
