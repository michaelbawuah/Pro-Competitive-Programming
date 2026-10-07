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

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
