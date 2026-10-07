# Next Prime

[Original problem](https://atcoder.jp/contests/abc149/tasks/abc149_c) · [C++ solution](../../solutions/atcoder/number_theory/abc149_c_next_prime.cpp)

## Try first

Test candidates in increasing order.

## Reasoning

Test candidates in increasing order. A composite number has a divisor at most its square root, so trial division up to that bound certifies each candidate; the first prime is minimal.

## Cost

- Time: **O((P-X+1) sqrt(P))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
