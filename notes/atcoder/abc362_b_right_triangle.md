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

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
