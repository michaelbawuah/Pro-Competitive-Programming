# Not Overflow

[Original problem](https://atcoder.jp/contests/abc237/tasks/abc237_a) · [C++ solution](../../solutions/atcoder/implementation/abc237_a_not_overflow.cpp)

## Try first

A signed 32-bit integer ranges from negative 2^31 through 2^31-1.

## Reasoning

A signed 32-bit integer ranges from negative 2^31 through 2^31-1. Read in a wider signed type and check both endpoints inclusively.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
