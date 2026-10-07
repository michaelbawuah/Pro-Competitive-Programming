# Couples

[Original problem](https://atcoder.jp/contests/abc359/tasks/abc359_b) · [C++ solution](../../solutions/atcoder/implementation/abc359_b_couples.cpp)

## Try first

Exactly one person between equal colors means their positions differ by two.

## Reasoning

Exactly one person between equal colors means their positions differ by two. Compare every pair of positions at that distance; each color occurs only twice, so no color is counted more than once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
