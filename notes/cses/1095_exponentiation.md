# Exponentiation

[Original problem](https://cses.fi/problemset/task/1095/) · [C++ solution](../../solutions/cses/mathematics/1095_exponentiation.cpp)

## Try first

Write the exponent in binary and repeatedly square the base.

## Reasoning

Maintain result * base^exponent congruent to the requested power. If the exponent is odd, move one base factor into result. Squaring the base and halving the remaining even exponent preserves the invariant. At exponent zero, result is the answer. Modular reduction after each multiplication preserves congruence and bounds intermediate products.

## Cost

- Time: **O(q log(b + 1))**.
- Extra space: **O(1)**.

## C++ takeaway

Multiply long long residues; the product of two numbers below 1,000,000,007 fits in signed 64-bit arithmetic.

## Watch for

Initialize result to one, including when the exponent is zero. This follows the problem's definition of 0^0=1.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
