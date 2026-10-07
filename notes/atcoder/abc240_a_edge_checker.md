# Edge Checker

[Original problem](https://atcoder.jp/contests/abc240/tasks/abc240_a) · [C++ solution](../../solutions/atcoder/implementation/abc240_a_edge_checker.cpp)

## Try first

The diagram is a ten-vertex cycle.

## Reasoning

The diagram is a ten-vertex cycle. Adjacent numeric labels share an edge, as do the wraparound labels one and ten.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

The types of operands control intermediate arithmetic. Read large values into long long before forming sums, products, or differences so the arithmetic itself uses 64 bits.

## Watch for

Integer division truncates toward zero; floor and ceiling formulas need special care for negative values.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
