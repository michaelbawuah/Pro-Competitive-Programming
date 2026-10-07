# Design Tutorial: Learn from Math

[Original problem](https://codeforces.com/problemset/problem/472/A) · [C++ solution](../../solutions/codeforces/constructive/472A_design_tutorial_learn_from_math.cpp)

## Try first

Choose four for an even total and nine for an odd total.

## Reasoning

Choose four for an even total and nine for an odd total. The remainder is even and at least four under the given lower bound, so both printed numbers are composite.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
