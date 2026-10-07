# In Search of an Easy Problem

[Original problem](https://codeforces.com/problemset/problem/1030/A) · [C++ solution](../../solutions/codeforces/implementation/1030A_in_search_of_an_easy_problem.cpp)

## Try first

The decision is the logical OR of all opinions.

## Reasoning

The decision is the logical OR of all opinions. A single one makes the problem hard, while the accumulator remains zero exactly when everyone answered zero.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
