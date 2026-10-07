# Comparing Strings

[Original problem](https://atcoder.jp/contests/abc152/tasks/abc152_b) · [C++ solution](../../solutions/atcoder/implementation/abc152_b_comparing_strings.cpp)

## Try first

Construct both repeated-digit strings and use the standard lexicographic string comparison, which also handles equality..

## Reasoning

Construct both repeated-digit strings and use the standard lexicographic string comparison, which also handles equality.

## Cost

- Time: **O(a+b)**.
- Extra space: **O(a+b)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
