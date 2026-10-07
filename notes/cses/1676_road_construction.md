# Road Construction

[Original problem](https://cses.fi/problemset/task/1676/) · [C++ solution](../../solutions/cses/graphs/1676_road_construction.cpp)

## Try first

Maintain connected components as sets, merging only when the new edge joins different sets.

## Reasoning

Initially every city is its own component. An edge within one component changes nothing. An edge between different components merges precisely those two, reducing the component count by one. A disjoint-set structure stores their sizes; the maximum size can only increase. Union by size and path compression make the sequence of operations nearly linear.

## Cost

- Time: **O(n + m alpha(n))**.
- Extra space: **O(n)**.

## C++ takeaway

Encapsulating parent and size arrays prevents callers from changing disjoint-set invariants.

## Watch for

Repeated roads and cycles must not reduce the component count. The initial largest component has size one.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
