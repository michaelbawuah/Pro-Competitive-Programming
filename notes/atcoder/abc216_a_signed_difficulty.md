# Signed Difficulty

[Original problem](https://atcoder.jp/contests/abc216/tasks/abc216_a) · [C++ solution](../../solutions/atcoder/implementation/abc216_a_signed_difficulty.cpp)

## Try first

Parse the single decimal digit separately and apply its three disjoint suffix ranges without rounding the number..

## Reasoning

Parse the single decimal digit separately and apply its three disjoint suffix ranges without rounding the number.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
