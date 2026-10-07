# Building Teams

[Original problem](https://cses.fi/problemset/task/1668/) · [C++ solution](../../solutions/cses/graphs/1668_building_teams.cpp)

## Try first

Assign alternating teams as you traverse every connected component.

## Reasoning

Once a vertex is assigned a team, every neighbor is forced onto the other team. A conflict proves no coloring can satisfy that component. With no conflicts, every edge joins opposite teams, producing a valid partition.

## Cost

- Time: **O(n + m)**.
- Extra space: **O(n + m)**.

## C++ takeaway

Zero is an unassigned sentinel; 3 - team flips between labels 1 and 2.

## Watch for

Start another traversal for disconnected components. The test checker accepts any valid coloring.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
