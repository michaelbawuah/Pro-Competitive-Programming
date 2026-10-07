# Adjacency List

[Original problem](https://atcoder.jp/contests/abc276/tasks/abc276_b) · [C++ solution](../../solutions/atcoder/implementation/abc276_b_adjacency_list.cpp)

## Try first

Insert each undirected road into both endpoint lists.

## Reasoning

Insert each undirected road into both endpoint lists. Sort each list and print its size followed by its members, including zero for an isolated city.

## Cost

- Time: **O(N+M log M)**.
- Extra space: **O(N+M)**.

## C++ takeaway

Keep the state variables named after the quantities in the invariant. Use standard C++17 containers and check the stated integer bounds.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
