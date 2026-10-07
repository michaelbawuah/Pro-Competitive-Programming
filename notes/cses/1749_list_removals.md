# List Removals

[Original problem](https://cses.fi/problemset/task/1749/) · [C++ solution](../../solutions/cses/segment_tree/1749_list_removals.cpp)

## Try first

A segment tree stores how many original positions remain alive.

## Reasoning

A segment tree stores how many original positions remain alive. To locate the requested rank, compare it with the left count and subtract that count when descending right. Clear the selected leaf after reporting its value.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
