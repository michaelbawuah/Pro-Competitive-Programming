# AtCoder Beginner Contest 111

[Original problem](https://atcoder.jp/contests/abc111/tasks/abc111_b) · [C++ solution](../../solutions/atcoder/implementation/abc111_b_atcoder_beginner_contest_111.cpp)

## Try first

The three-digit repeated-digit numbers are precisely 111 times an integer from one to nine.

## Reasoning

The three-digit repeated-digit numbers are precisely 111 times an integer from one to nine. Round N up to the next such multiple.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
