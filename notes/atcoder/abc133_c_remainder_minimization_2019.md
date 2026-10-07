# Remainder Minimization 2019

[Original problem](https://atcoder.jp/contests/abc133/tasks/abc133_c) · [C++ solution](../../solutions/atcoder/implementation/abc133_c_remainder_minimization_2019.cpp)

## Try first

An interval spanning at least 2019 contains a multiple of 2019, producing zero with another element.

## Reasoning

An interval spanning at least 2019 contains a multiple of 2019, producing zero with another element. Otherwise enumerate its fewer than 2020 residues and every pair.

## Cost

- Time: **O(min(R-L,2019)^2)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
