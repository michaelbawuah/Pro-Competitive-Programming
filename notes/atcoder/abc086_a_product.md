# Product

[Original problem](https://atcoder.jp/contests/abc086/tasks/abc086_a) · [C++ solution](../../solutions/atcoder/implementation/abc086_a_product.cpp)

## Try first

A product is odd exactly when both factors are odd.

## Reasoning

A product is odd exactly when both factors are odd. Testing the parity of each factor avoids any need to multiply.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
