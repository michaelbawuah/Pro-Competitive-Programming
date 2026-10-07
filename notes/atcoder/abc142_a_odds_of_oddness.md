# Odds of Oddness

[Original problem](https://atcoder.jp/contests/abc142/tasks/abc142_a) · [C++ solution](../../solutions/atcoder/implementation/abc142_a_odds_of_oddness.cpp)

## Try first

Among one through N, exactly ceil(N/2) values are odd.

## Reasoning

Among one through N, exactly ceil(N/2) values are odd. Divide that favorable count by the total using floating-point division.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
