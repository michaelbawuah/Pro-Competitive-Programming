# A Recursive Function

[Original problem](https://atcoder.jp/contests/abc273/tasks/abc273_a) · [C++ solution](../../solutions/atcoder/implementation/abc273_a_a_recursive_function.cpp)

## Try first

The recurrence multiplies all positive integers through N, starting with the base value one.

## Reasoning

The recurrence multiplies all positive integers through N, starting with the base value one. An empty product correctly handles N=0.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
