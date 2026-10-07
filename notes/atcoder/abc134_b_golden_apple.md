# Golden Apple

[Original problem](https://atcoder.jp/contests/abc134/tasks/abc134_b) · [C++ solution](../../solutions/atcoder/implementation/abc134_b_golden_apple.cpp)

## Try first

Each inspector covers at most 2D+1 consecutive trees.

## Reasoning

Each inspector covers at most 2D+1 consecutive trees. Consecutive groups of that size attain the resulting ceiling-division lower bound.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
