# Labyrinth

[Original problem](https://cses.fi/problemset/task/1193/) · [C++ solution](../../solutions/cses/graphs/1193_labyrinth.cpp)

## Try first

Breadth-first search finds shortest paths when every move costs one.

## Reasoning

BFS visits cells in nondecreasing distance from A. The first visit to a cell therefore gives a shortest route; remember the direction used to enter it. After reaching B, undo those moves to follow the predecessor chain back to A, then reverse the collected directions. If B is never visited, no route exists.

## Cost

- Time: **O(n m)**.
- Extra space: **O(n m)**.

## C++ takeaway

Flatten a grid cell into row*columns+column to store compact predecessor data in one vector.

## Watch for

Mark a cell when enqueuing it, not when removing it. The checker accepts any shortest valid path.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
