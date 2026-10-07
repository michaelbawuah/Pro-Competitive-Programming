# Overall Winner

[Original problem](https://atcoder.jp/contests/abc301/tasks/abc301_a) · [C++ solution](../../solutions/atcoder/implementation/abc301_a_overall_winner.cpp)

## Try first

A larger total win count decides immediately.

## Reasoning

A larger total win count decides immediately. In a tie, the final-game winner reaches the tied total last, so the other player wins the tie-break.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
