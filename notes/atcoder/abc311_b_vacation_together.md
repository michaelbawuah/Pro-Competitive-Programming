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

vector<bool> stores packed flags and returns a proxy on indexed access. Assign flags through indexing instead of trying to bind a bool& to an element.

## Watch for

Initialize every flag and preserve the distinction between a zero-based position and a one-based label.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
