# Tasks and Deadlines

[Original problem](https://cses.fi/problemset/task/1630/) · [C++ solution](../../solutions/cses/sorting_searching/1630_tasks_and_deadlines.cpp)

## Try first

The deadline sum is fixed; minimize the sum of completion times.

## Reasoning

For adjacent tasks of lengths a and b, putting a first contributes 2a+b to their completion-time sum, versus 2b+a in the opposite order. Thus a<=b should come first. Repeatedly removing inversions proves shortest-duration-first is optimal.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Rewards may be negative. Use a signed 64-bit accumulator for the sum of completion times.

## Watch for

Sorting by deadline does not optimize this objective.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
