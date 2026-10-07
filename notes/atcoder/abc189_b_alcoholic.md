# Alcoholic

[Original problem](https://atcoder.jp/contests/abc189/tasks/abc189_b) · [C++ solution](../../solutions/atcoder/implementation/abc189_b_alcoholic.cpp)

## Try first

Keep alcohol amounts scaled by one hundred for exact integer arithmetic.

## Reasoning

Keep alcohol amounts scaled by one hundred for exact integer arithmetic. Record the first prefix strictly exceeding the similarly scaled limit.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
