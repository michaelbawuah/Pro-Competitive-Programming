# Extended ABC

[Original problem](https://atcoder.jp/contests/abc337/tasks/abc337_b) · [C++ solution](../../solutions/atcoder/implementation/abc337_b_extended_abc.cpp)

## Try first

A string of only A, B, and C consists of an A block, B block, and C block exactly when its characters are nondecreasing.

## Reasoning

A string of only A, B, and C consists of an A block, B block, and C block exactly when its characters are nondecreasing. Empty blocks are naturally permitted.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
