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

Sorting changes element positions. Store an original index alongside each value when the answer refers to input positions, and make any tie-break explicit in the ordering.

## Watch for

Check repeated values and ties; a rank by occurrence differs from a rank by distinct value.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
