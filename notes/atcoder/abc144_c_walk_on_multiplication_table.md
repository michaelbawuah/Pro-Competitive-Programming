# Walk on Multiplication Table

[Original problem](https://atcoder.jp/contests/abc144/tasks/abc144_c) · [C++ solution](../../solutions/atcoder/number_theory/abc144_c_walk_on_multiplication_table.cpp)

## Try first

A square containing N corresponds to a factor pair (d,N/d).

## Reasoning

A square containing N corresponds to a factor pair (d,N/d). Reaching it needs d-1 downward and N/d-1 rightward moves; enumerate one member of each factor pair through the square root.

## Cost

- Time: **O(sqrt(N))**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
