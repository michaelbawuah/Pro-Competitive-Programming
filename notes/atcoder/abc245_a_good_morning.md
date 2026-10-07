# Good morning

[Original problem](https://atcoder.jp/contests/abc245/tasks/abc245_a) · [C++ solution](../../solutions/atcoder/implementation/abc245_a_good_morning.cpp)

## Try first

Compare minutes since midnight.

## Reasoning

Compare minutes since midnight. Equal minute values favor Takahashi because Aoki wakes one second later.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
