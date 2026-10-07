# Vanishing Pitch

[Original problem](https://atcoder.jp/contests/abc191/tasks/abc191_a) · [C++ solution](../../solutions/atcoder/implementation/abc191_a_vanishing_pitch.cpp)

## Try first

Constant speed turns the invisible time interval into the inclusive distance interval [VT,VS].

## Reasoning

Constant speed turns the invisible time interval into the inclusive distance interval [VT,VS]. Hitting is possible outside it.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
