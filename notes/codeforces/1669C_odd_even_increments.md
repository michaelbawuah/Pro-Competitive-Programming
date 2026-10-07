# Odd/Even Increments

[Original problem](https://codeforces.com/problemset/problem/1669/C) · [C++ solution](../../solutions/codeforces/invariants/1669C_odd_even_increments.cpp)

## Try first

An operation flips parity at all positions of one index parity simultaneously.

## Reasoning

An operation flips parity at all positions of one index parity simultaneously. Differences within each group are therefore invariant, so each group must already have uniform parity; then independently flip groups as needed.

## Cost

- Time: **O(n) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
