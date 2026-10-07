# Div

[Original problem](https://atcoder.jp/contests/abc198/tasks/abc198_a) · [C++ solution](../../solutions/atcoder/implementation/abc198_a_div.cpp)

## Try first

The first boy can receive any integer from one to N-1, and each choice uniquely fixes the second share..

## Reasoning

The first boy can receive any integer from one to N-1, and each choice uniquely fixes the second share.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
