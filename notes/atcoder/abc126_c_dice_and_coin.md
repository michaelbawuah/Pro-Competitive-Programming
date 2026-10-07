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

std::set keeps one ordered copy of each key. insert returns both an iterator and a Boolean indicating whether the key was new.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
