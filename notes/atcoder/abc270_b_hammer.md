# Hammer

[Original problem](https://atcoder.jp/contests/abc270/tasks/abc270_b) · [C++ solution](../../solutions/atcoder/implementation/abc270_b_hammer.cpp)

## Try first

Reflect the line if needed so the goal is positive.

## Reasoning

Reflect the line if needed so the goal is positive. A wall outside the segment from zero to the goal is irrelevant. Otherwise the hammer must be on the accessible side, and the optimal route visits it before the goal.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Subtract coordinates in a sufficiently wide signed type before applying abs or squaring. The operand types determine the arithmetic width of the intermediate result.

## Watch for

Squared distances can exceed individual coordinate bounds; ties and zero differences deserve separate attention.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
