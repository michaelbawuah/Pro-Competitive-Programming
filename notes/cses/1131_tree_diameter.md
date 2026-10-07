# Tree Diameter

[Original problem](https://cses.fi/problemset/task/1131/) · [C++ solution](../../solutions/cses/trees/1131_tree_diameter.cpp)

## Try first

Walk as far as possible from any vertex, then as far as possible from that endpoint.

## Reasoning

In a tree, a farthest vertex from an arbitrary start is an endpoint of some diameter. One way to see the endpoint property is to project the start and a farthest vertex onto a longest path: if the farthest branch could not replace an endpoint, one of that path's endpoints would be farther from the start. A second BFS from the discovered endpoint finds the maximum distance, which is the diameter. Unique tree paths make BFS distances exact.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Return distance vectors by value; move semantics and return-value optimization avoid manual ownership code.

## Watch for

The answer counts edges, so a one-vertex tree has diameter zero. The two-sweep property is specific to trees, not general graphs.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
