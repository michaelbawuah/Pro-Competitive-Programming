# Distance Between Tokens

[Original problem](https://atcoder.jp/contests/abc253/tasks/abc253_b) · [C++ solution](../../solutions/atcoder/implementation/abc253_b_distance_between_tokens.cpp)

## Try first

Each move changes exactly one coordinate by one, so at least the Manhattan distance is needed.

## Reasoning

Each move changes exactly one coordinate by one, so at least the Manhattan distance is needed. Moving monotonically toward the destination stays in the rectangle and attains this bound.

## Cost

- Time: **O(HW)**.
- Extra space: **O(W)**.

## C++ takeaway

Subtract coordinates in a sufficiently wide signed type before applying abs or squaring. The operand types determine the arithmetic width of the intermediate result.

## Watch for

Squared distances can exceed individual coordinate bounds; ties and zero differences deserve separate attention.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
