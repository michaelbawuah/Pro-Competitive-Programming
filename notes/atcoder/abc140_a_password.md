# Password

[Original problem](https://atcoder.jp/contests/abc140/tasks/abc140_a) · [C++ solution](../../solutions/atcoder/implementation/abc140_a_password.cpp)

## Try first

Each of three positions has N independent choices, giving N cubed possible passwords.

## Reasoning

Each of three positions has N independent choices, giving N cubed possible passwords.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
