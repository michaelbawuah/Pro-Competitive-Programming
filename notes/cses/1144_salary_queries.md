# Salary Queries

[Original problem](https://cses.fi/problemset/task/1144/) · [C++ solution](../../solutions/cses/fenwick/1144_salary_queries.cpp)

## Try first

Compress initial and future salary values while preserving order.

## Reasoning

Compress initial and future salary values while preserving order. A Fenwick tree stores frequencies at compressed ranks; replacing a salary removes one count and adds another. Subtract prefix counts at lower_bound(a) and upper_bound(b) for an inclusive range.

## Cost

- Time: **O((n+q) log(n+q))**.
- Extra space: **O(n+q)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
