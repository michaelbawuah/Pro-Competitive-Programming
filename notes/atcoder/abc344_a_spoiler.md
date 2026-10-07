# Spoiler

[Original problem](https://atcoder.jp/contests/abc344/tasks/abc344_a) · [C++ solution](../../solutions/atcoder/implementation/abc344_a_spoiler.cpp)

## Try first

Keep the prefix before the first bar and the suffix after the second bar.

## Reasoning

Keep the prefix before the first bar and the suffix after the second bar. Concatenating those pieces removes both bars and everything between them.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
