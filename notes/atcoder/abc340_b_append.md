# Append

[Original problem](https://atcoder.jp/contests/abc340/tasks/abc340_b) · [C++ solution](../../solutions/atcoder/implementation/abc340_b_append.cpp)

## Try first

Append queries extend a vector.

## Reasoning

Append queries extend a vector. The k-th value from the end has zero-based index size-k, and the input guarantees that this index exists.

## Cost

- Time: **O(Q)**.
- Extra space: **O(Q)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
