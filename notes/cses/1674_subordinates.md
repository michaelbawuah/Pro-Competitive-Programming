# Subordinates

[Original problem](https://cses.fi/problemset/task/1674/) · [C++ solution](../../solutions/cses/trees/1674_subordinates.cpp)

## Try first

A manager's subtree contains the manager plus every direct report's subtree.

## Reasoning

First build an ordering in which each parent appears before its children. Reversing it ensures every child subtree size is final before computing its parent. Initialize each size to one for the employee, then add direct children's sizes. Those disjoint subtrees partition all descendants, so subtracting one gives the number of subordinates.

## Cost

- Time: **O(n)**.
- Extra space: **O(n)**.

## C++ takeaway

An expanding vector can act as a traversal queue; copy the current vertex before push_back may reallocate it.

## Watch for

A chain can be 200,000 vertices deep. Avoid recursive DFS and do not count the employee as their own subordinate.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
