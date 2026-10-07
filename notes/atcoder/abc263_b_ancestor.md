# Ancestor

[Original problem](https://atcoder.jp/contests/abc263/tasks/abc263_b) · [C++ solution](../../solutions/atcoder/implementation/abc263_b_ancestor.cpp)

## Try first

Follow parent links from N to one, counting edges.

## Reasoning

Follow parent links from N to one, counting edges. Parent indices strictly decrease, guaranteeing termination at the root and giving the exact number of generations.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
