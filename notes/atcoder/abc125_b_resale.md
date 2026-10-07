# Resale

[Original problem](https://atcoder.jp/contests/abc125/tasks/abc125_b) · [C++ solution](../../solutions/atcoder/implementation/abc125_b_resale.cpp)

## Try first

Gem choices are independent.

## Reasoning

Gem choices are independent. Take each positive value-minus-cost contribution and omit negative ones; zero contributions do not change the answer.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize state before the scan and update it once per input element. Read a range-loop variable by reference when filling a container.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
