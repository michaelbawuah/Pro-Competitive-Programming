# Find Multiple

[Original problem](https://atcoder.jp/contests/abc220/tasks/abc220_a) · [C++ solution](../../solutions/atcoder/implementation/abc220_a_find_multiple.cpp)

## Try first

Round the lower endpoint up to the first multiple of C.

## Reasoning

Round the lower endpoint up to the first multiple of C. It witnesses existence if within the upper bound; otherwise no later multiple can fit.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
