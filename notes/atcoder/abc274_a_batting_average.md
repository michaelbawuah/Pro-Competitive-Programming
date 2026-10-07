# Batting Average

[Original problem](https://atcoder.jp/contests/abc274/tasks/abc274_a) · [C++ solution](../../solutions/atcoder/implementation/abc274_a_batting_average.cpp)

## Try first

Compute the nearest integer to 1000B/A using integer arithmetic with half-up rounding.

## Reasoning

Compute the nearest integer to 1000B/A using integer arithmetic with half-up rounding. Split that integer into the whole part and a three-digit fractional part to enforce the exact format.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
