# Cabbages

[Original problem](https://atcoder.jp/contests/abc210/tasks/abc210_a) · [C++ solution](../../solutions/atcoder/implementation/abc210_a_cabbages.cpp)

## Try first

Split purchased heads into the first A at regular price and any excess at the discounted price..

## Reasoning

Split purchased heads into the first A at regular price and any excess at the discounted price.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
