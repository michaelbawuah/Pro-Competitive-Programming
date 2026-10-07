# Making Triangle

[Original problem](https://atcoder.jp/contests/abc175/tasks/abc175_b) · [C++ solution](../../solutions/atcoder/implementation/abc175_b_making_triangle.cpp)

## Try first

After sorting, check strict differences of the three lengths and the single nontrivial triangle inequality: the two smaller lengths must exceed the largest..

## Reasoning

After sorting, check strict differences of the three lengths and the single nontrivial triangle inequality: the two smaller lengths must exceed the largest.

## Cost

- Time: **O(n^3)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
