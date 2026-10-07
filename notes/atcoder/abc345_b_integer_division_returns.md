# Integer Division Returns

[Original problem](https://atcoder.jp/contests/abc345/tasks/abc345_b) · [C++ solution](../../solutions/atcoder/implementation/abc345_b_integer_division_returns.cpp)

## Try first

Truncation toward zero already equals ceiling for negative values.

## Reasoning

Truncation toward zero already equals ceiling for negative values. Positive nonmultiples require adding one; exact multiples need no adjustment.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
