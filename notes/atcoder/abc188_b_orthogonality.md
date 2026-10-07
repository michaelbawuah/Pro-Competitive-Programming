# Orthogonality

[Original problem](https://atcoder.jp/contests/abc188/tasks/abc188_b) · [C++ solution](../../solutions/atcoder/implementation/abc188_b_orthogonality.cpp)

## Try first

Pair corresponding vector coordinates, sum their products, and compare the resulting inner product with zero.

## Reasoning

Pair corresponding vector coordinates, sum their products, and compare the resulting inner product with zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
