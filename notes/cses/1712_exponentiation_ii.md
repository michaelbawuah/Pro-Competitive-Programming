# Exponentiation II

[Original problem](https://cses.fi/problemset/task/1712/) · [C++ solution](../../solutions/cses/mathematics/1712_exponentiation_ii.cpp)

## Try first

For a nonzero base modulo a prime, exponents may be reduced modulo prime-1.

## Reasoning

The modulus p is prime and 0<=a<p. For a nonzero a, Fermat's theorem gives a^(p-1)=1 modulo p, so only b^c modulo p-1 matters. Compute that reduced exponent with binary exponentiation, then compute the outer power. Handle a=0 separately because Fermat's theorem does not apply: the answer is one exactly when the true exponent is zero, which occurs when b=0 and c>0 under the stated 0^0 convention.

## Cost

- Time: **O(q (log(c + 1) + log MOD))**.
- Extra space: **O(1)**.

## C++ takeaway

Pass the modulus into a reusable exponentiation helper; the two stages intentionally use different moduli.

## Watch for

A reduced exponent of zero need not mean the true exponent is zero. Also, b=0 and c=0 yields exponent one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
