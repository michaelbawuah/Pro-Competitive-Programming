# Star or Not

[Original problem](https://atcoder.jp/contests/abc225/tasks/abc225_b) · [C++ solution](../../solutions/atcoder/implementation/abc225_b_star_or_not.cpp)

## Try first

In a tree with N-1 edges, a vertex of degree N-1 touches every edge and every other vertex.

## Reasoning

In a tree with N-1 edges, a vertex of degree N-1 touches every edge and every other vertex. This is exactly a star center.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
