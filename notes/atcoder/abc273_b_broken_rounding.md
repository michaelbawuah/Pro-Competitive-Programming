# Broken Rounding

[Original problem](https://atcoder.jp/contests/abc273/tasks/abc273_b) · [C++ solution](../../solutions/atcoder/implementation/abc273_b_broken_rounding.cpp)

## Try first

At each scale, adding half the place value before integer division performs nearest rounding with ties upward.

## Reasoning

At each scale, adding half the place value before integer division performs nearest rounding with ties upward. Apply scales in increasing order because earlier carries affect later rounding.

## Cost

- Time: **O(K)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
