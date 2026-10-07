# Snack

[Original problem](https://atcoder.jp/contests/abc148/tasks/abc148_c) · [C++ solution](../../solutions/atcoder/number_theory/abc148_c_snack.cpp)

## Try first

A valid snack count is a positive common multiple.

## Reasoning

A valid snack count is a positive common multiple. Divide one factor by the gcd before multiplying to compute the least common multiple while keeping intermediate values small.

## Cost

- Time: **O(log(min(A,B)))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
