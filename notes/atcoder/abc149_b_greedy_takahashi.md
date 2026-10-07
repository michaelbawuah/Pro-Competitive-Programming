# Greedy Takahashi

[Original problem](https://atcoder.jp/contests/abc149/tasks/abc149_b) · [C++ solution](../../solutions/atcoder/implementation/abc149_b_greedy_takahashi.cpp)

## Try first

Consume as many of the first pile as possible before applying the remaining operations to the second.

## Reasoning

Consume as many of the first pile as possible before applying the remaining operations to the second. Clamp each consumption by its pile size.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Use long long for products and accumulated totals, and check limits before a multiplication that could overflow.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
