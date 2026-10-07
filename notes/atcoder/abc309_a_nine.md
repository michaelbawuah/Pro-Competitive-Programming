# Nine

[Original problem](https://atcoder.jp/contests/abc309/tasks/abc309_a) · [C++ solution](../../solutions/atcoder/implementation/abc309_a_nine.cpp)

## Try first

In the row-major three-by-three board, horizontal neighbors have consecutive numbers and the same zero-based row.

## Reasoning

In the row-major three-by-three board, horizontal neighbors have consecutive numbers and the same zero-based row. Both conditions are needed at row boundaries.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
