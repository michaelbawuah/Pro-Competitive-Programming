# Maximum Difference

[Original problem](https://atcoder.jp/contests/abc102/tasks/abc102_b) · [C++ solution](../../solutions/atcoder/implementation/abc102_b_maximum_difference.cpp)

## Try first

Every pair difference is bounded by maximum minus minimum, and choosing those extremes attains the bound.

## Reasoning

Every pair difference is bounded by maximum minus minimum, and choosing those extremes attains the bound.

## Cost

- Time: **O(n)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
