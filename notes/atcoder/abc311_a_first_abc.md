# First ABC

[Original problem](https://atcoder.jp/contests/abc311/tasks/abc311_a) · [C++ solution](../../solutions/atcoder/implementation/abc311_a_first_abc.cpp)

## Try first

Represent the three seen letters with three bits.

## Reasoning

Represent the three seen letters with three bits. The first prefix whose mask has all bits set is the shortest prefix containing A, B, and C.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
