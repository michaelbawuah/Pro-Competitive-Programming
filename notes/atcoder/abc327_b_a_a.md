# A^A

[Original problem](https://atcoder.jp/contests/abc327/tasks/abc327_b) · [C++ solution](../../solutions/atcoder/implementation/abc327_b_a_a.cpp)

## Try first

The function A^A is strictly increasing for positive integers.

## Reasoning

The function A^A is strictly increasing for positive integers. Since 16^16 exceeds 10^18 while 15^15 fits signed 64-bit arithmetic, only A from one through fifteen need exact multiplication.

## Cost

- Time: **O(15^2)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
