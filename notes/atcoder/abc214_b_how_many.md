# How many?

[Original problem](https://atcoder.jp/contests/abc214/tasks/abc214_b) · [C++ solution](../../solutions/atcoder/implementation/abc214_b_how_many.cpp)

## Try first

The sum bound limits every coordinate to S.

## Reasoning

The sum bound limits every coordinate to S. Enumerate all nonnegative triples respecting the sum and count those also respecting the product.

## Cost

- Time: **O(S^3)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
