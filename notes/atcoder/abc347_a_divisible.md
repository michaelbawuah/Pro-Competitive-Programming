# Divisible

[Original problem](https://atcoder.jp/contests/abc347/tasks/abc347_a) · [C++ solution](../../solutions/atcoder/implementation/abc347_a_divisible.cpp)

## Try first

Filter the already increasing sequence for divisibility by K and divide qualifying values by the same positive K.

## Reasoning

Filter the already increasing sequence for divisibility by K and divide qualifying values by the same positive K. Their increasing order is preserved.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
