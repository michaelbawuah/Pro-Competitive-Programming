# Course Schedule

[Original problem](https://cses.fi/problemset/task/1679/) · [C++ solution](../../solutions/cses/graphs/1679_course_schedule.cpp)

## Try first

A course is ready when no unfinished prerequisite remains.

## Reasoning

indegree counts prerequisites among unprocessed vertices. Removing a zero-indegree vertex is safe and updates its dependents. If vertices remain but none is ready, following prerequisites within the remainder must repeat a vertex, revealing a cycle.

## Cost

- Time: **O(n + m)**.
- Extra space: **O(n + m)**.

## C++ takeaway

Keep external 1-based course numbers separate from internal 0-based indices.

## Watch for

All courses, including isolated ones, must appear. The checker accepts every valid topological order.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
