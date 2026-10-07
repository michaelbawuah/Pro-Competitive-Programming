# Weird Function

[Original problem](https://atcoder.jp/contests/abc234/tasks/abc234_a) · [C++ solution](../../solutions/atcoder/implementation/abc234_a_weird_function.cpp)

## Try first

Define the given polynomial once and preserve the exact nesting of its calls.

## Reasoning

Define the given polynomial once and preserve the exact nesting of its calls. Use 64-bit intermediates for squared values.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
