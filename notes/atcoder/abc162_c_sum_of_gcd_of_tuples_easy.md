# Sum of gcd of Tuples (Easy)

[Original problem](https://atcoder.jp/contests/abc162/tasks/abc162_c) · [C++ solution](../../solutions/atcoder/number_theory/abc162_c_sum_of_gcd_of_tuples_easy.cpp)

## Try first

Enumerate all ordered triples under the small K bound.

## Reasoning

Enumerate all ordered triples under the small K bound. Associativity of gcd lets each pair gcd be reused across the third-coordinate loop.

## Cost

- Time: **O(K^3 log K)**.
- Extra space: **O(1)**.

## C++ takeaway

std::gcd is declared in <numeric>. Use long long for lcm products and accumulated totals even when each input fits in int.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
