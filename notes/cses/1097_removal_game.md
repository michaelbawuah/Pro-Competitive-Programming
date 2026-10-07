# Removal Game

[Original problem](https://cses.fi/problemset/task/1097/) · [C++ solution](../../solutions/cses/dynamic_programming/1097_removal_game.cpp)

## Try first

Let a state be the best score difference the current player can force on an interval.

## Reasoning

Let a state be the best score difference the current player can force on an interval. Taking either endpoint earns its value minus the opponent difference on the remainder. Increasing interval lengths permits a one-dimensional update; convert the final difference and total sum into the first player score.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
