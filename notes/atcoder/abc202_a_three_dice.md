# Three Dice

[Original problem](https://atcoder.jp/contests/abc202/tasks/abc202_a) · [C++ solution](../../solutions/atcoder/implementation/abc202_a_three_dice.cpp)

## Try first

Each opposite-face pair sums to seven, so the three bottom faces sum to twenty-one minus the three top faces..

## Reasoning

Each opposite-face pair sums to seven, so the three bottom faces sum to twenty-one minus the three top faces.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
