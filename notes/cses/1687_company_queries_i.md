# Company Queries I

[Original problem](https://cses.fi/problemset/task/1687/) · [C++ solution](../../solutions/cses/trees/1687_company_queries_i.cpp)

## Try first

Precompute ancestors at distances 1, 2, 4, 8, and so on.

## Reasoning

ancestor[j][v] is the 2^j-th ancestor of v. Two jumps of length 2^(j-1) construct the next level. Decompose each requested distance into powers of two and perform the corresponding jumps. Their lengths sum to the request, so the resulting vertex is exactly the requested ancestor. Vertex zero is a sentinel whose ancestors remain zero.

## Cost

- Time: **O((n + q) log n)**.
- Extra space: **O(n log n)**.

## C++ takeaway

A zero-initialized extra column provides a safe sentinel for nonexistent ancestors.

## Watch for

The boss of employee 1 does not exist. The table includes enough bits for the maximum allowed k, which is n.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
