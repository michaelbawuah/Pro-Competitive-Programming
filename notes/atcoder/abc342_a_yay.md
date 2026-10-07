# Yay!

[Original problem](https://atcoder.jp/contests/abc342/tasks/abc342_a) · [C++ solution](../../solutions/atcoder/implementation/abc342_a_yay.cpp)

## Try first

Count letter occurrences, then locate the character whose frequency is one.

## Reasoning

Count letter occurrences, then locate the character whose frequency is one. Under the promise, this is the sole different character, and its one-based position is the answer.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
