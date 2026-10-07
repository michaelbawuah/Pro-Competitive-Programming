# Road Reparation

[Original problem](https://cses.fi/problemset/task/1675/) · [C++ solution](../../solutions/cses/graphs/1675_road_reparation.cpp)

## Try first

Add the cheapest edge that joins two different components.

## Reasoning

An edge that joins distinct components is safe by the cut property: replacing a more expensive crossing edge cannot worsen a spanning tree. DSU detects whether an edge would form a cycle. A spanning tree has n - 1 selected edges; fewer means the graph is disconnected.

## Cost

- Time: **O(m log m + n)**.
- Extra space: **O(n + m)**.

## C++ takeaway

Sorting tuples orders by cost first. Path compression and union by size keep DSU operations near constant time.

## Watch for

A minimum spanning forest is not a valid answer when some cities remain disconnected.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
