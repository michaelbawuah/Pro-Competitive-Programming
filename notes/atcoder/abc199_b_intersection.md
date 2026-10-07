# Intersection

[Original problem](https://atcoder.jp/contests/abc199/tasks/abc199_b) · [C++ solution](../../solutions/atcoder/implementation/abc199_b_intersection.cpp)

## Try first

Intersect all inclusive intervals by taking the largest lower bound and smallest upper bound; count the remaining integers if the interval is nonempty..

## Reasoning

Intersect all inclusive intervals by taking the largest lower bound and smallest upper bound; count the remaining integers if the interval is nonempty.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
