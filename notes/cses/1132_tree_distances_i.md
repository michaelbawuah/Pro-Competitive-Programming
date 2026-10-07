# Tree Distances I

[Original problem](https://cses.fi/problemset/task/1132/) · [C++ solution](../../solutions/cses/trees/1132_tree_distances_i.cpp)

## Try first

Find a diameter. For any vertex, one of its endpoints is a farthest vertex.

## Reasoning

Let a and b be diameter endpoints. For any vertex v, its maximum distance is max(dist(v,a),dist(v,b)). To justify this, project v and another vertex x onto the a-b path. The branch depth of x is bounded by its distances along that path to both endpoints; otherwise x would extend the diameter. Comparing the two possible orders of the projections shows dist(v,x) cannot exceed the farther endpoint distance. Two sweeps find a and b, and the endpoint distance arrays answer every vertex.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Reuse the same BFS helper for each source while keeping the two endpoint distance arrays.

## Watch for

Distance from only one endpoint is insufficient. A star's center has eccentricity one, while its leaves have eccentricity two.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
