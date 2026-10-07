# Domino Piling

[Original problem](https://codeforces.com/problemset/problem/50/A) · [C++ solution](../../solutions/codeforces/mathematics/50A_domino_piling.cpp)

## Try first

Each domino covers two cells. Can the area upper bound always be attained?

## Reasoning

At most floor(rows*columns/2) dominoes fit because their covered cells are disjoint. If either dimension is even, tile in pairs along that dimension. If both are odd, tile all but one row in pairs, then tile pairs in the remaining row, leaving one cell. These constructions attain the area bound in every case.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Integer division of a nonnegative product computes the required floor.

## Watch for

An odd board area leaves one uncovered cell; complete coverage is not required.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
