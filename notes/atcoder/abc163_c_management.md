# management

[Original problem](https://atcoder.jp/contests/abc163/tasks/abc163_c) · [C++ solution](../../solutions/atcoder/implementation/abc163_c_management.cpp)

## Try first

Each listed boss gains exactly one immediate subordinate from that entry.

## Reasoning

Each listed boss gains exactly one immediate subordinate from that entry. Count direct parent references; descendants beyond one edge must not be included.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
