# Yellow and Red Card

[Original problem](https://atcoder.jp/contests/abc292/tasks/abc292_b) · [C++ solution](../../solutions/atcoder/implementation/abc292_b_yellow_and_red_card.cpp)

## Try first

Store a dismissal score: a yellow adds one and a red sets it to two.

## Reasoning

Store a dismissal score: a yellow adds one and a red sets it to two. A player is removed exactly when the score reaches two.

## Cost

- Time: **O(N+Q)**.
- Extra space: **O(N)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
