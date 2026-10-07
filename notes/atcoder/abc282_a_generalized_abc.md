# Generalized ABC

[Original problem](https://atcoder.jp/contests/abc282/tasks/abc282_a) · [C++ solution](../../solutions/atcoder/implementation/abc282_a_generalized_abc.cpp)

## Try first

Emit the first K consecutive uppercase letters by adding zero-based offsets to A..

## Reasoning

Emit the first K consecutive uppercase letters by adding zero-based offsets to A.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
