# Lexicographic Order

[Original problem](https://atcoder.jp/contests/abc217/tasks/abc217_a) · [C++ solution](../../solutions/atcoder/implementation/abc217_a_lexicographic_order.cpp)

## Try first

The standard string less-than operator implements lexicographic ordering, including the shorter-prefix rule..

## Reasoning

The standard string less-than operator implements lexicographic ordering, including the shorter-prefix rule.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
