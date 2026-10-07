# AcCepted

[Original problem](https://atcoder.jp/contests/abc104/tasks/abc104_b) · [C++ solution](../../solutions/atcoder/implementation/abc104_b_accepted.cpp)

## Try first

Validate the initial A, count C only in its allowed interval, and require every other character to be lowercase.

## Reasoning

Validate the initial A, count C only in its allowed interval, and require every other character to be lowercase. All three independent conditions must hold.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
