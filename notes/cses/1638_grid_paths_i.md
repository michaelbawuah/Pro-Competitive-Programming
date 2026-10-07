# Grid Paths I

[Original problem](https://cses.fi/problemset/task/1638/) · [C++ solution](../../solutions/cses/dynamic_programming/1638_grid_paths_i.cpp)

## Try first

A path enters each open cell from above or from the left.

## Reasoning

While scanning a row, ways[c] still holds the previous row value for the cell above, and ways[c-1] holds the updated value to the left. Adding them counts two disjoint final moves. A blocked cell has zero ways and clears the previous row value. The initial ways[0]=1 seeds the start, unless it is blocked.

## Cost

- Time: **O(n^2)**.
- Extra space: **O(n)**.

## C++ takeaway

One vector can hold two consecutive DP rows when the update order preserves the dependencies.

## Watch for

Reset blocked cells to zero. A blocked start or destination must yield zero.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
