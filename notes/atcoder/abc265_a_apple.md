# Apple

[Original problem](https://atcoder.jp/contests/abc265/tasks/abc265_a) · [C++ solution](../../solutions/atcoder/implementation/abc265_a_apple.cpp)

## Try first

For every group of three apples, choose the cheaper of a bundle and three singles.

## Reasoning

For every group of three apples, choose the cheaper of a bundle and three singles. The leftover one or two apples must be singles.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
