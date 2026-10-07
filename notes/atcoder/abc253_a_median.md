# Median?

[Original problem](https://atcoder.jp/contests/abc253/tasks/abc253_a) · [C++ solution](../../solutions/atcoder/implementation/abc253_a_median.cpp)

## Try first

The middle value lies inclusively between the other two values.

## Reasoning

The middle value lies inclusively between the other two values. Inclusive comparisons also cover ties.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
