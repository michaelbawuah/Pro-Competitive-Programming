# Garden

[Original problem](https://atcoder.jp/contests/abc106/tasks/abc106_a) · [C++ solution](../../solutions/atcoder/implementation/abc106_a_garden.cpp)

## Try first

Remove one unit of usable length in each dimension.

## Reasoning

Remove one unit of usable length in each dimension. Inclusion-exclusion gives AB-A-B+1, equal to (A-1)(B-1).

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
