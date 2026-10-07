# Go to School

[Original problem](https://atcoder.jp/contests/abc142/tasks/abc142_c) · [C++ solution](../../solutions/atcoder/implementation/abc142_c_go_to_school.cpp)

## Try first

The given count is precisely the arrival rank.

## Reasoning

The given count is precisely the arrival rank. Invert the permutation by placing each student at the position specified by that rank.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
