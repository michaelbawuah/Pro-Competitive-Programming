# Measure

[Original problem](https://atcoder.jp/contests/abc319/tasks/abc319_b) · [C++ solution](../../solutions/atcoder/implementation/abc319_b_measure.cpp)

## Try first

For each position, test candidate digits in increasing order.

## Reasoning

For each position, test candidate digits in increasing order. A digit qualifies only when it divides N and its tick spacing N/j divides the position; the first match is the required smallest digit.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
