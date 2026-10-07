# Second Best

[Original problem](https://atcoder.jp/contests/abc365/tasks/abc365_b) · [C++ solution](../../solutions/atcoder/implementation/abc365_b_second_best.cpp)

## Try first

Retain original indices with the values and sort descending.

## Reasoning

Retain original indices with the values and sort descending. Distinct values make the second sorted pair the unique second-largest element.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
