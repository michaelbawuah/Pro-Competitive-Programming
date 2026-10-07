# Counting Rooms

[Original problem](https://cses.fi/problemset/task/1192/) · [C++ solution](../../solutions/cses/graphs/1192_counting_rooms.cpp)

## Try first

Every room is one connected component of floor cells.

## Reasoning

A flood fill marks exactly the floor cells reachable from its starting cell. Each unvisited floor cell that starts a new fill belongs to a previously unseen component. Mark cells when pushing them so each is added at most once.

## Cost

- Time: **O(n * m)**.
- Extra space: **O(n * m)**.

## C++ takeaway

An explicit vector stack avoids recursion depth proportional to a million-cell room.

## Watch for

Diagonal adjacency does not connect rooms.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
