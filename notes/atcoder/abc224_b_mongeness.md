# Mongeness

[Original problem](https://atcoder.jp/contests/abc224/tasks/abc224_b) · [C++ solution](../../solutions/atcoder/implementation/abc224_b_mongeness.cpp)

## Try first

Every required rectangular inequality is the sum of its adjacent two-by-two inequalities: all interior terms cancel.

## Reasoning

Every required rectangular inequality is the sum of its adjacent two-by-two inequalities: all interior terms cancel. Therefore checking adjacent cells is necessary and sufficient.

## Cost

- Time: **O(HW)**.
- Extra space: **O(HW)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
