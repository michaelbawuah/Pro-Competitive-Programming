# Dice and Coin

[Original problem](https://atcoder.jp/contests/abc126/tasks/abc126_c) · [C++ solution](../../solutions/atcoder/probability/abc126_c_dice_and_coin.cpp)

## Try first

Condition on the equally likely die result.

## Reasoning

Condition on the equally likely die result. Each required doubling needs one heads, so its success probability is halved per doubling. Sum those disjoint conditional contributions.

## Cost

- Time: **O(n log K)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
