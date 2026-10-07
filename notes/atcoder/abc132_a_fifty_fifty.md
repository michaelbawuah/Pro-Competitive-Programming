# Fifty-Fifty

[Original problem](https://atcoder.jp/contests/abc132/tasks/abc132_a) · [C++ solution](../../solutions/atcoder/implementation/abc132_a_fifty_fifty.cpp)

## Try first

Sorting groups equal characters.

## Reasoning

Sorting groups equal characters. Exactly two pairs means positions zero and one match, positions two and three match, and the two groups differ.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
