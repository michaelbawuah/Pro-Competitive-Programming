# Echo

[Original problem](https://atcoder.jp/contests/abc145/tasks/abc145_b) · [C++ solution](../../solutions/atcoder/implementation/abc145_b_echo.cpp)

## Try first

Two identical copies require an even length.

## Reasoning

Two identical copies require an even length. If that holds, equality of the two halves is necessary and sufficient.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
