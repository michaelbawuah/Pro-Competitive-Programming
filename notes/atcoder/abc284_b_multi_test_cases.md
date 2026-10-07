# Multi Test Cases

[Original problem](https://atcoder.jp/contests/abc284/tasks/abc284_b) · [C++ solution](../../solutions/atcoder/implementation/abc284_b_multi_test_cases.cpp)

## Try first

Reset a counter for every test case and add one for each positive value with remainder one modulo two..

## Reasoning

Reset a counter for every test case and add one for each positive value with remainder one modulo two.

## Cost

- Time: **O(total N)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
