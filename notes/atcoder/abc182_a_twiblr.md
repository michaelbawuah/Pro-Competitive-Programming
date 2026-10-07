# twiblr

[Original problem](https://atcoder.jp/contests/abc182/tasks/abc182_a) · [C++ solution](../../solutions/atcoder/implementation/abc182_a_twiblr.cpp)

## Try first

Subtract the current following count from the allowed total; the constraints guarantee the result is nonnegative..

## Reasoning

Subtract the current following count from the allowed total; the constraints guarantee the result is nonnegative.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
