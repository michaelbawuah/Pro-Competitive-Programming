# Strange Bank

[Original problem](https://atcoder.jp/contests/abc099/tasks/abc099_c) · [C++ solution](../../solutions/atcoder/dynamic_programming/abc099_c_strange_bank.cpp)

## Try first

The last withdrawal is one available denomination.

## Reasoning

The last withdrawal is one available denomination. Minimize one plus the optimal count for the remaining amount; processing totals in increasing order makes all predecessor states available.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
