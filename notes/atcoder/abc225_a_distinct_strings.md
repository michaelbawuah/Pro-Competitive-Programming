# Distinct Strings

[Original problem](https://atcoder.jp/contests/abc225/tasks/abc225_a) · [C++ solution](../../solutions/atcoder/implementation/abc225_a_distinct_strings.cpp)

## Try first

Sorting starts at the smallest permutation.

## Reasoning

Sorting starts at the smallest permutation. Each successful next_permutation advances to a distinct arrangement, even when letters repeat.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
