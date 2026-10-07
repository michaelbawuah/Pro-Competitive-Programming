# Longest Palindrome

[Original problem](https://atcoder.jp/contests/abc320/tasks/abc320_b) · [C++ solution](../../solutions/atcoder/implementation/abc320_b_longest_palindrome.cpp)

## Try first

Every palindrome has a center at a character or between two characters.

## Reasoning

Every palindrome has a center at a character or between two characters. Expand outward from each such center while both ends match, retaining the largest valid length.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
