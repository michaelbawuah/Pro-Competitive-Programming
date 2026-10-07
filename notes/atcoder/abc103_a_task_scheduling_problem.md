# Task Scheduling Problem

[Original problem](https://atcoder.jp/contests/abc103/tasks/abc103_a) · [C++ solution](../../solutions/atcoder/implementation/abc103_a_task_scheduling_problem.cpp)

## Try first

Every route must cover the distance between the extremes.

## Reasoning

Every route must cover the distance between the extremes. Visiting tasks in sorted order attains that distance.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division truncates toward zero; use remainder to test divisibility. Evaluate products in long long before assigning the result.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
