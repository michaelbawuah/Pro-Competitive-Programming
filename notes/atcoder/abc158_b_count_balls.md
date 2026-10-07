# Count Balls

[Original problem](https://atcoder.jp/contests/abc158/tasks/abc158_b) · [C++ solution](../../solutions/atcoder/implementation/abc158_b_count_balls.cpp)

## Try first

Each full block contributes A blue balls.

## Reasoning

Each full block contributes A blue balls. The remaining prefix contributes at most A further blue balls.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
