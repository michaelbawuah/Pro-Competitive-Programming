# Minimal Square

[Original problem](https://codeforces.com/problemset/problem/1360/A) · [C++ solution](../../solutions/codeforces/geometry/1360A_minimal_square.cpp)

## Try first

Put the two rectangles side by side along their shorter dimension.

## Reasoning

Put the two rectangles side by side along their shorter dimension. The containing square needs side at least the longer dimension and twice the shorter one; this arrangement attains both necessary bounds.

## Cost

- Time: **O(1) per case**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
