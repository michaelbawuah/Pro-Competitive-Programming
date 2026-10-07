# Five Antennas

[Original problem](https://atcoder.jp/contests/abc123/tasks/abc123_a) · [C++ solution](../../solutions/atcoder/implementation/abc123_a_five_antennas.cpp)

## Try first

The greatest antenna separation is between the extreme coordinates.

## Reasoning

The greatest antenna separation is between the extreme coordinates. Every pair can communicate exactly when that maximum is within the limit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
