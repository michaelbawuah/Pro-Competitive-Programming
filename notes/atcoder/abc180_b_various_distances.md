# Various distances

[Original problem](https://atcoder.jp/contests/abc180/tasks/abc180_b) · [C++ solution](../../solutions/atcoder/implementation/abc180_b_various_distances.cpp)

## Try first

Accumulate absolute values, squared values, and their maximum separately.

## Reasoning

Accumulate absolute values, squared values, and their maximum separately. Only the Euclidean distance needs a final square root; wide integers keep both sums exact.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
