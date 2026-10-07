# Product Max

[Original problem](https://atcoder.jp/contests/abc178/tasks/abc178_b) · [C++ solution](../../solutions/atcoder/implementation/abc178_b_product_max.cpp)

## Try first

For a fixed coordinate the product is linear in the other coordinate, so an optimum exists at interval endpoints.

## Reasoning

For a fixed coordinate the product is linear in the other coordinate, so an optimum exists at interval endpoints. Check all four corners.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
