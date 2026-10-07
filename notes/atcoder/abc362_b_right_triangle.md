# Right Triangle

[Original problem](https://atcoder.jp/contests/abc362/tasks/abc362_b) · [C++ solution](../../solutions/atcoder/implementation/abc362_b_right_triangle.cpp)

## Try first

Compute all three squared side lengths and sort them.

## Reasoning

Compute all three squared side lengths and sort them. By the converse of the Pythagorean theorem, the nondegenerate triangle is right exactly when the smaller two sum to the largest.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
