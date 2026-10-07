# Triangle (Easier)

[Original problem](https://atcoder.jp/contests/abc262/tasks/abc262_b) · [C++ solution](../../solutions/atcoder/implementation/abc262_b_triangle_easier.cpp)

## Try first

Enumerate vertex triples in strictly increasing order so each candidate triangle appears once.

## Reasoning

Enumerate vertex triples in strictly increasing order so each candidate triangle appears once. An adjacency matrix tests all three required edges in constant time.

## Cost

- Time: **O(n^3+M)**.
- Extra space: **O(n^2)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
