# Shout Everyday

[Original problem](https://atcoder.jp/contests/abc367/tasks/abc367_a) · [C++ solution](../../solutions/atcoder/implementation/abc367_a_shout_everyday.cpp)

## Try first

Measure both the shouting time and wake-up time clockwise from bedtime.

## Reasoning

Measure both the shouting time and wake-up time clockwise from bedtime. Since all times differ, shouting is possible exactly when its elapsed time lies beyond the sleeping interval.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
