# Heavy Rotation

[Original problem](https://atcoder.jp/contests/abc181/tasks/abc181_a) · [C++ solution](../../solutions/atcoder/implementation/abc181_a_heavy_rotation.cpp)

## Try first

Every day flips the color, so odd elapsed days give black and even elapsed days restore white..

## Reasoning

Every day flips the color, so odd elapsed days give black and even elapsed days restore white.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
