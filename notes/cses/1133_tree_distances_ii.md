# Tree Distances II

[Original problem](https://cses.fi/problemset/task/1133/) · [C++ solution](../../solutions/cses/trees/1133_tree_distances_ii.cpp)

## Try first

First compute the root distance sum and every subtree size.

## Reasoning

First compute the root distance sum and every subtree size. Moving the root across an edge into a subtree shortens distances to its size vertices and lengthens distances to all others, yielding answer[child]=answer[parent]+n-2*size[child]. Iterative traversals avoid deep recursion.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use long long before multiplying or accumulating large quantities. Assigning an already-overflowed int expression to long long does not repair it.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
