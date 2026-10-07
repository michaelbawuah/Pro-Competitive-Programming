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

Initialize counters and container entries before scanning. A range-based loop with int& can read directly into a vector; a loop by value only copies each entry.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
