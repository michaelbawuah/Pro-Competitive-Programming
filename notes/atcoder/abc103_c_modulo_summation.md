# Modulo Summation

[Original problem](https://atcoder.jp/contests/abc103/tasks/abc103_c) · [C++ solution](../../solutions/atcoder/implementation/abc103_c_modulo_summation.cpp)

## Try first

Each remainder is at most a_i-1.

## Reasoning

Each remainder is at most a_i-1. Taking m one less than a common multiple of all inputs achieves every upper bound simultaneously, so sum those bounds without constructing m.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
