# Happy Birthday!

[Original problem](https://atcoder.jp/contests/abc100/tasks/abc100_a) · [C++ solution](../../solutions/atcoder/implementation/abc100_a_happy_birthday.cpp)

## Try first

A person can occupy at most eight nonadjacent positions on a sixteen-cycle.

## Reasoning

A person can occupy at most eight nonadjacent positions on a sixteen-cycle. Alternating parity positions achieves both demands whenever each is at most eight.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
