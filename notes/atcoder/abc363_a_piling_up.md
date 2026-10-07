# Piling Up

[Original problem](https://atcoder.jp/contests/abc363/tasks/abc363_a) · [C++ solution](../../solutions/atcoder/implementation/abc363_a_piling_up.cpp)

## Try first

The next display threshold is the next strictly greater multiple of one hundred.

## Reasoning

The next display threshold is the next strictly greater multiple of one hundred. Subtract the current within-band remainder from one hundred.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
