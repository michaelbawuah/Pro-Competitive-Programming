# First Query Problem

[Original problem](https://atcoder.jp/contests/abc283/tasks/abc283_b) · [C++ solution](../../solutions/atcoder/implementation/abc283_b_first_query_problem.cpp)

## Try first

Maintain the current array directly.

## Reasoning

Maintain the current array directly. A type-one query overwrites one element; a type-two query reads the latest stored value at its index.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
