# Rock-paper-scissors

[Original problem](https://atcoder.jp/contests/abc204/tasks/abc204_a) · [C++ solution](../../solutions/atcoder/implementation/abc204_a_rock_paper_scissors.cpp)

## Try first

A three-player draw has all hands equal or all three different.

## Reasoning

A three-player draw has all hands equal or all three different. Match equal known hands; otherwise supply the missing hand.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
