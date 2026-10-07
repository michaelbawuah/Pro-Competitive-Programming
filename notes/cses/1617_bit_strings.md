# Bit Strings

[Original problem](https://cses.fi/problemset/task/1617/) · [C++ solution](../../solutions/cses/introductory/1617_bit_strings.cpp)

## Try first

Each position has two choices; compute the power without constructing strings.

## Reasoning

There are 2^n strings. Binary exponentiation maintains answer * base^n congruent to the requested power. Consume one bit of n per iteration and reduce every multiplication modulo 1,000,000,007.

## Cost

- Time: **O(log n)**.
- Extra space: **O(1)**.

## C++ takeaway

Products of two residues fit in long long for this fixed modulus, but not in int.

## Watch for

Modulo must be applied during multiplication, not only once at the end.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
