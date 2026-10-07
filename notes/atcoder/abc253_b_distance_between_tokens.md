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

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
