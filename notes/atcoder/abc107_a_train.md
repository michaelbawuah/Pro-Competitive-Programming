# Train

[Original problem](https://atcoder.jp/contests/abc107/tasks/abc107_a) · [C++ solution](../../solutions/atcoder/implementation/abc107_a_train.cpp)

## Try first

The first and last positions add to N+1, so reversing the direction maps i to N-i+1.

## Reasoning

The first and last positions add to N+1, so reversing the direction maps i to N-i+1.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
