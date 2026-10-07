# Longest Uncommon Prefix

[Original problem](https://atcoder.jp/contests/abc285/tasks/abc285_b) · [C++ solution](../../solutions/atcoder/implementation/abc285_b_longest_uncommon_prefix.cpp)

## Try first

For each shift, compare aligned characters from the beginning until the first equality or the string boundary.

## Reasoning

For each shift, compare aligned characters from the beginning until the first equality or the string boundary. Any longer prefix would include that forbidden equality or exceed the boundary.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
