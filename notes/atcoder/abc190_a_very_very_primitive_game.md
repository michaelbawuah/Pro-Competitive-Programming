# Very Very Primitive Game

[Original problem](https://atcoder.jp/contests/abc190/tasks/abc190_a) · [C++ solution](../../solutions/atcoder/implementation/abc190_a_very_very_primitive_game.cpp)

## Try first

More candies guarantee victory.

## Reasoning

More candies guarantee victory. Equal counts cause the first player to run out first, so the second player wins ties.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
