# Remaining Balls

[Original problem](https://atcoder.jp/contests/abc154/tasks/abc154_a) · [C++ solution](../../solutions/atcoder/implementation/abc154_a_remaining_balls.cpp)

## Try first

Exactly one named category loses one ball.

## Reasoning

Exactly one named category loses one ball. Compare the removed label and decrement that category only.

## Cost

- Time: **O(|S|+|T|)**.
- Extra space: **O(|S|+|T|)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
