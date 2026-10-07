# 326-like Numbers

[Original problem](https://atcoder.jp/contests/abc326/tasks/abc326_b) · [C++ solution](../../solutions/atcoder/implementation/abc326_b_326_like_numbers.cpp)

## Try first

Scan candidate integers upward and test the hundreds-times-tens digit relation.

## Reasoning

Scan candidate integers upward and test the hundreds-times-tens digit relation. The first match is the smallest valid integer at least N.

## Cost

- Time: **O(1000)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
