# camel Case

[Original problem](https://atcoder.jp/contests/abc291/tasks/abc291_a) · [C++ solution](../../solutions/atcoder/implementation/abc291_a_camel_case.cpp)

## Try first

Scan the characters and identify the guaranteed unique uppercase letter by its character range.

## Reasoning

Scan the characters and identify the guaranteed unique uppercase letter by its character range. Print its index plus one.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
