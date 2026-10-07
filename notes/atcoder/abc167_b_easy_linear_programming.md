# Easy Linear Programming

[Original problem](https://atcoder.jp/contests/abc167/tasks/abc167_b) · [C++ solution](../../solutions/atcoder/implementation/abc167_b_easy_linear_programming.cpp)

## Try first

Choose as many positive cards as possible, then zero cards.

## Reasoning

Choose as many positive cards as possible, then zero cards. Only the demand beyond those two supplies forces negative cards.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
