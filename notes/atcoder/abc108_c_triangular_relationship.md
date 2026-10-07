# Triangular Relationship

[Original problem](https://atcoder.jp/contests/abc108/tasks/arc102_a) · [C++ solution](../../solutions/atcoder/implementation/abc108_c_triangular_relationship.cpp)

## Try first

Pair-sum congruences force all three residues equal and twice that residue divisible by K.

## Reasoning

Pair-sum congruences force all three residues equal and twice that residue divisible by K. Thus all residues are zero, or all are K/2 when K is even; cube each class size.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
