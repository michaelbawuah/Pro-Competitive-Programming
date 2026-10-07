# Pentagon

[Original problem](https://atcoder.jp/contests/abc333/tasks/abc333_b) · [C++ solution](../../solutions/atcoder/implementation/abc333_b_pentagon.cpp)

## Try first

In a regular pentagon, segment length depends only on the smaller cyclic distance between its vertices: one for sides and two for diagonals.

## Reasoning

In a regular pentagon, segment length depends only on the smaller cyclic distance between its vertices: one for sides and two for diagonals. Compare those distances.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
