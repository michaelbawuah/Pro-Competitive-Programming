# Movie Festival

[Original problem](https://cses.fi/problemset/task/1629/) · [C++ solution](../../solutions/cses/sorting_searching/1629_movie_festival.cpp)

## Try first

Choose the compatible movie that finishes earliest.

## Reasoning

Replace the first movie in any optimal schedule with the earliest-finishing compatible one. This never delays the rest of the schedule. Repeating that exchange proves the greedy selection maximizes the number watched.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Store (finish, start) pairs so the default pair ordering is the desired sort order.

## Watch for

A movie starting at the previous finish is allowed.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
