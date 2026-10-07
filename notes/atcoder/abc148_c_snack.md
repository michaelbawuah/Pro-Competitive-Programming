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

std::gcd is declared in <numeric>. Use long long for lcm products and accumulated totals even when each input fits in int.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
