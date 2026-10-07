# Insert

[Original problem](https://atcoder.jp/contests/abc361/tasks/abc361_a) · [C++ solution](../../solutions/atcoder/implementation/abc361_a_insert.cpp)

## Try first

Copy each original value in order and emit X immediately after the K-th value.

## Reasoning

Copy each original value in order and emit X immediately after the K-th value. This inserts one new element without changing any existing order.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
