# flip

[Original problem](https://atcoder.jp/contests/abc289/tasks/abc289_a) · [C++ solution](../../solutions/atcoder/implementation/abc289_a_flip.cpp)

## Try first

Replace every bit independently by the other bit.

## Reasoning

Replace every bit independently by the other bit. Each original character is visited exactly once.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
