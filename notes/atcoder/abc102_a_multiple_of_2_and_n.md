# Multiple of 2 and N

[Original problem](https://atcoder.jp/contests/abc102/tasks/abc102_a) · [C++ solution](../../solutions/atcoder/implementation/abc102_a_multiple_of_2_and_n.cpp)

## Try first

If N is even it already contains a factor of two; otherwise twice N is the smallest common multiple.

## Reasoning

If N is even it already contains a factor of two; otherwise twice N is the smallest common multiple.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
