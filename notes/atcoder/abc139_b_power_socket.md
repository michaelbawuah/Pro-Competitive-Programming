# Power Socket

[Original problem](https://atcoder.jp/contests/abc139/tasks/abc139_b) · [C++ solution](../../solutions/atcoder/implementation/abc139_b_power_socket.cpp)

## Try first

Adding a strip consumes one existing socket and supplies A new ones, a net gain of A-1.

## Reasoning

Adding a strip consumes one existing socket and supplies A new ones, a net gain of A-1. Ceiling-divide the required extra B-1 sockets by that gain.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
