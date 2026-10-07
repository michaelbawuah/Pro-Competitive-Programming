# Six Characters

[Original problem](https://atcoder.jp/contests/abc251/tasks/abc251_a) · [C++ solution](../../solutions/atcoder/implementation/abc251_a_six_characters.cpp)

## Try first

Cycle through the original string positions modulo its length until six characters have been emitted.

## Reasoning

Cycle through the original string positions modulo its length until six characters have been emitted. The permitted lengths all divide six.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
