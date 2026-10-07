# Farthest Point

[Original problem](https://atcoder.jp/contests/abc348/tasks/abc348_b) · [C++ solution](../../solutions/atcoder/implementation/abc348_b_farthest_point.cpp)

## Try first

Squared Euclidean distances have the same ordering as distances.

## Reasoning

Squared Euclidean distances have the same ordering as distances. Scan candidate IDs in increasing order and update only for a strict improvement, preserving the smallest ID when distances tie.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
