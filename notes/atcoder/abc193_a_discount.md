# Discount

[Original problem](https://atcoder.jp/contests/abc193/tasks/abc193_a) · [C++ solution](../../solutions/atcoder/implementation/abc193_a_discount.cpp)

## Try first

The discount fraction is the reduction divided by the original price.

## Reasoning

The discount fraction is the reduction divided by the original price. Multiply by one hundred to express it as a percentage.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
