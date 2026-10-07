# 321-like Checker

[Original problem](https://atcoder.jp/contests/abc321/tasks/abc321_a) · [C++ solution](../../solutions/atcoder/implementation/abc321_a_321_like_checker.cpp)

## Try first

Strictly decreasing digits mean every adjacent pair decreases.

## Reasoning

Strictly decreasing digits mean every adjacent pair decreases. Compare neighboring digit characters; their character order matches numeric digit order.

## Cost

- Time: **O(number of digits)**.
- Extra space: **O(number of digits)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
