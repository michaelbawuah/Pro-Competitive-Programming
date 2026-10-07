# Traffic Lights

[Original problem](https://cses.fi/problemset/task/1163/) · [C++ solution](../../solutions/cses/sorting_searching/1163_traffic_lights.cpp)

## Try first

Inserting one light splits exactly one existing interval into two.

## Reasoning

The position set identifies neighboring lights. The gap multiset contains every adjacent distance with multiplicity. Remove the split interval once, insert its two parts, and read the largest remaining distance. These updates preserve the invariant after every insertion.

## Cost

- Time: **O(n log n)**.
- Extra space: **O(n)**.

## C++ takeaway

Use an iterator when erasing one repeated gap length. prev is safe because both street endpoints are stored.

## Watch for

The task guarantees distinct interior light positions.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
