# Intersection

[Original problem](https://atcoder.jp/contests/abc261/tasks/abc261_a) · [C++ solution](../../solutions/atcoder/implementation/abc261_a_intersection.cpp)

## Try first

The intersection begins at the larger left endpoint and ends at the smaller right endpoint.

## Reasoning

The intersection begins at the larger left endpoint and ends at the smaller right endpoint. Its length is their nonnegative difference, or zero if disjoint.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
