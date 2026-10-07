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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
