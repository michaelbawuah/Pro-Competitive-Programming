# ... (Triple Dots)

[Original problem](https://atcoder.jp/contests/abc168/tasks/abc168_b) · [C++ solution](../../solutions/atcoder/implementation/abc168_b_triple_dots.cpp)

## Try first

Truncate only when the length strictly exceeds K, then append exactly three dots..

## Reasoning

Truncate only when the length strictly exceeds K, then append exactly three dots.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
