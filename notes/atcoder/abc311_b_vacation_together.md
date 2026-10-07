# Vacation Together

[Original problem](https://atcoder.jp/contests/abc311/tasks/abc311_b) · [C++ solution](../../solutions/atcoder/implementation/abc311_b_vacation_together.cpp)

## Try first

A day is available only when every person is free.

## Reasoning

A day is available only when every person is free. Intersect all schedules, then track the longest consecutive run of available days.

## Cost

- Time: **O(ND)**.
- Extra space: **O(D)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
