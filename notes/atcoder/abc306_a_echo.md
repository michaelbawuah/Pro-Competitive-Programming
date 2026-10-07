# Echo

[Original problem](https://atcoder.jp/contests/abc306/tasks/abc306_a) · [C++ solution](../../solutions/atcoder/implementation/abc306_a_echo.cpp)

## Try first

Visit original characters in order and emit each twice.

## Reasoning

Visit original characters in order and emit each twice. This duplicates characters without duplicating or reordering the whole string.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
