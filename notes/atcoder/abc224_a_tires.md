# Tires

[Original problem](https://atcoder.jp/contests/abc224/tasks/abc224_a) · [C++ solution](../../solutions/atcoder/implementation/abc224_a_tires.cpp)

## Try first

The two promised suffixes have different final letters, so the last character determines which suffix occurs..

## Reasoning

The two promised suffixes have different final letters, so the last character determines which suffix occurs.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
