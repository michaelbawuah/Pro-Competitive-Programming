# Plural Form

[Original problem](https://atcoder.jp/contests/abc179/tasks/abc179_a) · [C++ solution](../../solutions/atcoder/implementation/abc179_a_plural_form.cpp)

## Try first

Inspect only the final character to choose the plural suffix, leaving the original word unchanged..

## Reasoning

Inspect only the final character to choose the plural suffix, leaving the original word unchanged.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
