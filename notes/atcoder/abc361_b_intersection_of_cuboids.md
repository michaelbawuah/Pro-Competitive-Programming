# Intersection of Cuboids

[Original problem](https://atcoder.jp/contests/abc361/tasks/abc361_b) · [C++ solution](../../solutions/atcoder/implementation/abc361_b_intersection_of_cuboids.cpp)

## Try first

Axis-aligned cuboids intersect as the product of their three coordinate-interval intersections.

## Reasoning

Axis-aligned cuboids intersect as the product of their three coordinate-interval intersections. Positive volume requires a strictly positive overlap length on every axis; touching faces or edges are insufficient.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
