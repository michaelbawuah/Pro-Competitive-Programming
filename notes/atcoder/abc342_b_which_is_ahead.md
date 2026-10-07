# Which is ahead?

[Original problem](https://atcoder.jp/contests/abc342/tasks/abc342_b) · [C++ solution](../../solutions/atcoder/implementation/abc342_b_which_is_ahead.cpp)

## Try first

Invert the permutation so every person number maps to its position.

## Reasoning

Invert the permutation so every person number maps to its position. A query is then a constant-time comparison of the two positions.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
