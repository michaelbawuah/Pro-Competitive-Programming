# 10yen Stamp

[Original problem](https://atcoder.jp/contests/abc233/tasks/abc233_a) · [C++ solution](../../solutions/atcoder/implementation/abc233_a_10yen_stamp.cpp)

## Try first

Only a positive deficit needs operations.

## Reasoning

Only a positive deficit needs operations. Ceiling-divide that deficit by ten; clamp the result at zero when the initial value already suffices.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
